#include <iostream>

using namespace std;

int main()
{
    unsigned short int moya_shkola, nomer_shkoli, mas[10], iter;
    for(iter = 0;iter < 10;iter++)
    {
       cout << "vvedi nomer shkoli:";
       cin >> nomer_shkoli;
       mas[iter] = nomer_shkoli;
    }
    cout << "a teper vvedi svoyu shkolu:";
    cin >> moya_shkola;
    iter = 0;
    while(mas[iter] != moya_shkola && iter <= 10)
    {
        iter++;
    }
    if(iter<10)
    {
        cout << "ya znayu etu shkolu!";
    }
    else
    {
        cout << "ya ne znau etu shkolu!";
    }
    return 0;
}
