#include <iostream>

using namespace std;

int main()
{
    unsigned short int moya_shkola, nomer_shkoli, mas[10];
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
            cout << "ya znayu etu shkolu!";
            return 0;
        }
    }
    cout << "ya ne znau etu shkolu!";
    return 0;
}
