#include <iostream>

using namespace std;

int main()
{
    int income;
    float million = 1000000.1;
    cout << "Skolko ti zarabativaesh?" << endl;
    cin >> income;
    if (income < million)
       {
         if (income > 1000) cout <<  "Tak derzhat!";
         if (income < 1000) cout << "Rabotai bolshe";
       }
    if (income > million)
       {
        cout << "Ti millioner!";
       }
    return 0;
}
