#include <iostream>
#include <string>

using namespace std;

int main()
{
    string output = "ya ne znayu etu shkolu!"; // question about string!!!
    unsigned short int moya_shkola;
    unsigned short int nomer_shkoli;
    unsigned short int mas[10];
    for(int iter = 0;iter < 10;iter++)
    {
       cout << "vvedi nomer shkoli:";
       cin >> nomer_shkoli;
       mas[iter] = nomer_shkoli;
    }
    cout << "a teper vvedi svoyu shkolu:";
    cin >> moya_shkola;
    for(int iter = 0;iter < 10;iter++)
    {
        if(mas[iter] == moya_shkola)
        {
            output = "ya znayu etu shkolu!";
            iter = 10;
        }
    }
    cout << output;
    return 0;
}
