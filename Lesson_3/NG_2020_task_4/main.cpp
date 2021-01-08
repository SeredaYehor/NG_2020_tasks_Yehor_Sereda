#include <iostream>

using namespace std;

int main()
{
    char stroka[50],symbol[26],alpha_max,sym_max;
    int number_of_sym[26]={0};
    int iter = 0;
    cout << "Enter string: ";
    cin.getline(stroka,50);
    while(stroka[iter] != 0)
    {
        char buffer = stroka[iter];
        if((buffer >= 'a' && buffer <= 'z')||(buffer >= 'A' && buffer <= 'Z'))
        {
            if(buffer >= 'a' && buffer <= 'z') buffer -= 32;
            number_of_sym[buffer - 'A']++;
            symbol[buffer - 'A'] = buffer;
        }
        iter++;
    }
    for(iter = 0;iter<26;iter++)
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
    for(iter = 0;iter<26;iter++)
    {
        if(number_of_sym[iter] != 0) cout << symbol[iter] << '-' << number_of_sym[iter] << endl;
    }
    return 0;
}
