#include <iostream>

using namespace std;

int main()
{
    int moya_shkola;
    float nomer_shkoli;
    int mas[10];
    for(int iter = 0;iter < 10;iter++)
    {
       cout << "vvedi nomer shkoli:";
       cin >> nomer_shkoli;
       moya_shkola=nomer_shkoli;
       mas[iter] = nomer_shkoli;
       if(nomer_shkoli < 1||nomer_shkoli!=moya_shkola)
       {
           cout << "Oshibka!Neverno vvedeniy nomer shkoli.\n";
           iter -= 1;
       }
       for(int searching = iter-1;searching>=0;searching--)
       {
           if(nomer_shkoli==mas[searching])
           {
               cout << "Etot nomer uze prisutstvuet. Pogaluista vvedite drugoin nomer\n";
               iter--;
               break;
           }
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
