#include <iostream>

using namespace std;

int get_card_numb()
{
    int nomer_karti;
    cin >> nomer_karti;
    if(nomer_karti>10||nomer_karti<0)
    {
        cout << "Error" << endl;
        return get_card_numb();
    }
    return nomer_karti;
}

int get_val()
{
    int sum;
    cin >> sum;
    if(sum<0)
    {
        cout << "Error" << endl;
        return get_val();
    }
    return sum;
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

int karti[10]={0};

int main(int arr[10])
{
       int nomer_karti,sum;
       cout << endl << "vvedite nomer kartochki:";
       nomer_karti = get_card_numb();
       cout << "skolko_polozhit?";
       sum = get_val();
       cout << endl;
       set_val(karti,sum,nomer_karti);
       show(karti,nomer_karti,0);
       main(karti);
}
