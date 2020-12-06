#include <iostream>

using namespace std;

int main()
{
    while(true)
    {
       int karti[10]={0};
       int nomer_karti,sum;
       cout << endl << "vvedite nomer kartochki:";
       cin >> nomer_karti;
       if(nomer_karti>10||nomer_karti<0) break;
       cout << "skolko_polozhit?";
       cin >> sum;
       if(sum<0) break;
       cout << endl;
       karti[nomer_karti] = sum;
       for(int i=0;i<10;i++) cout << karti[i] << " ";
    }
    return 0;
}
