#include <iostream>

using namespace std;

int main()
{
    char stroka[50];
    cout << "Enter string: ";
    cin.getline(stroka,50);
    for(int i = 0;stroka[i] != '\0';i++)
    {
        if(stroka[i]>='a'&&stroka[i]<='z')
        {
          stroka[i]-=32;
        }
    }
    cout << "Result: " << stroka;
    return 0;
}
