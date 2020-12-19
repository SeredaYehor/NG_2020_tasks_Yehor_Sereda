#include <iostream>

using namespace std;

int main()
{
    int karti[10]={0};
    while(true)
    {
       int nomer_karti,sum,all_cards_value = 0;
       cout << endl << "vvedite nomer kartochki:";
       cin >> nomer_karti;
       if(nomer_karti>10||nomer_karti<0)
       {
           continue;
       }
       cout << "skolko_polozhit?";
       cin >> sum;
       if(sum<0)
       {
           continue;
       }
       cout << endl;
       karti[nomer_karti] += sum;
       for(int i=0;i<10;i++)
       {
           all_cards_value+=karti[i];
           cout << karti[i] << " ";
       }
       cout << endl << "v summe na vseh kartah:" << all_cards_value;
    }
    return 0;
}
