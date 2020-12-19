#include <iostream>

using namespace std;

int main()
{
    int nomer_shkoli,moya_shkola;
    int mas[10];
    for(int iter = 0;iter < 10;iter++)
    {
       cout << "vvedi nomer shkoli:";
       cin >> nomer_shkoli;
       mas[iter] = nomer_shkoli;
       if(nomer_shkoli < 1)
       {
           cout << "Oshibka!Neverno vvedeniy nomer shkoli.\n";
           iter -= 1;
       }
    }
    cout << "a teper vvedi svoyu shkolu:";
    cin >> moya_shkola;
    for(int iter = 0;iter < 10;iter++)
    {
        if(mas[iter] == moya_shkola)
        {
            cout << "ya znayu etu shkolu!";
            nomer_shkoli = 1;
        }
    }
    if(nomer_shkoli != 1) cout << "ya ne znayu etu shkolu!";
    return 0;
}
