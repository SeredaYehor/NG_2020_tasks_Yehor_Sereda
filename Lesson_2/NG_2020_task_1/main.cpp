#include <iostream>

using namespace std;

int main()
{
    int nomer_shkoli,moya_shkola;
    int mas[10];
    for(int iter=0;iter<10;iter++)
    {
       cout << "vvedi nomer shkoli:";
       cin >> nomer_shkoli;
       mas[iter]=nomer_shkoli;
       if(nomer_shkoli<1) exit(0);
    }
    cout << "a teper vvedi svoyu shkolu:";
    cin >> moya_shkola;
    for(int iter=0;iter<10;iter++)
    {
        if(mas[iter]==moya_shkola)
        {
            cout << "ya znayu etu shkolu!";
            break;
        }
        else if(iter==9) cout << "ya ne znayu etu shkolu!";
    }
    return 0;
}
