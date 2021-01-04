#include <iostream>

using namespace std;

int get_card_numb()
{
    int nomer_karti;
    cin >> nomer_karti;
    while(nomer_karti>10||nomer_karti<0)
    {
        cout << "Oshibka, neverniy nomer karti! Pogaluista vvedite pravilniy nomer." << endl;
        cin >> nomer_karti;
    }
    return nomer_karti;
}

int get_val()
{
    int sum;
    cin >> sum;
    if(sum>0) return sum;
    else
    {
        cout << "Oshibka, vi ne mozhete stolko polozhit. Pogaluista vvedite vernuu sumu dlya vlozheniya." << endl;
        return get_val();
    }
}

void set_val(int arr[10], int sum , int number)
{
    arr[number]+=sum;
}

void show(int arr[10],int number,int res)
{
    for(int i = 0;i<10;i++)
    {
        res+=arr[i];
        cout << arr[i]<<" ";
    }
    cout << endl << "v summe na vseh kartah:" << res;
}


int main()
{
       int karti[10]={0};
       int nomer_karti,sum;
       while(true)
       {
            cout << endl << "vvedite nomer kartochki:";
            nomer_karti = get_card_numb();
            cout << "skolko_polozhit?";
            sum = get_val();
            cout << endl;
            set_val(karti,sum,nomer_karti);
            show(karti,nomer_karti,0);
       }
       return 0;
}
