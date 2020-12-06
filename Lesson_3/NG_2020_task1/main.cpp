#include <iostream>

using namespace std;

int main()
{
    char stroka[50];
    int number_of_words = 0;
    cout << "Enter string: ";
    cin.getline(stroka,50);
    if(stroka[0] != '\0')
    {
    number_of_words=1;
    for(int i = 0;stroka[i] != '\0';i++)
    {
        if(stroka[i+1]!=' '&&(stroka[i]>='a'&&stroka[i]<='z')==(stroka[i+1]>='0'&&stroka[i+1]<='9')&&stroka[i]!=stroka[i+1])
        {
           ++number_of_words;
        }
    }
    }
    cout << "Number of words=" << number_of_words;
    return 0;
}
