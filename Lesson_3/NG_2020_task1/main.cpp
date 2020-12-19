#include <iostream>

using namespace std;

int main()
{
    char stroka[50];
    int number_of_words = 0;
    cout << "Enter string: ";
    cin.getline(stroka,50);
    for(int i = 0;stroka[i] != '\0';i++)
    {
        if(((stroka[i]>='a'&&stroka[i]<='z')||(stroka[i]>='A'&&stroka[i]<='Z'))&&(stroka[i+1]<'a'||stroka[i+1]>'z'))
        {
           ++number_of_words;
        }
    }
    cout << "Number of words=" << number_of_words;
    return 0;
}
