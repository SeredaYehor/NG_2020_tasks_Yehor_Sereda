#include <iostream>

using namespace std;

int main()
{
    char stroka[50],symbol[26],alpha_max;
    int same_sym = 0,sym_max;
    int number_of_sym[26]={255};
    cout << "Enter string: ";
    cin.getline(stroka,50);
    for(int iter = 0;stroka[iter] != '\0';iter++)
    {
        alpha_max=0;
        same_sym=0;
        for(int i = iter;stroka[i] != '\0';i++)
        {
            if(stroka[i]>='a'&&stroka[i]<='z'&&stroka[iter]==stroka[i]) same_sym++;
        }
        for(sym_max = iter-1;sym_max >= 0;sym_max--)
        {
            if(stroka[sym_max]==stroka[iter])
            {
                alpha_max=1;
                break;
            }
        }
        if(alpha_max!=1)
        {
        symbol[iter]=stroka[iter]-32;
        number_of_sym[iter]=same_sym;
        }
    }
    for(int iter = 0;iter<26;iter++)
    {
        sym_max = number_of_sym[iter];
        for(int sorting = iter;sorting<26;sorting++)
        {
            if(number_of_sym[iter]<number_of_sym[sorting])
            {
               alpha_max=symbol[sorting];
               symbol[sorting]=symbol[iter];
               symbol[iter]=alpha_max;
               sym_max=number_of_sym[sorting];
               number_of_sym[sorting]=number_of_sym[iter];
               number_of_sym[iter]=sym_max;
            }
        }
    }
    for(int iter = 0;number_of_sym[iter]!=0;iter++)
    {
        cout << symbol[iter] << '-' << number_of_sym[iter] << endl;
    }
    return 0;
}
