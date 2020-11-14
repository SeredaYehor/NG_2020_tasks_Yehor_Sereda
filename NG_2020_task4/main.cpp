#include <iostream>

using namespace std;

int main()
{
    int income;
    cout << "Skolko ti zarabativaesh?" << endl;
    cin >> income;
    if (income < 1000000)
       {
         if ( income > 1000) cout <<  "Tak derzhat!";
         if (income < 1000) cout << "Rabotai bolshe";

       }
    if (income > 1000000)
       {
        cout << "Ti millioner!";
       }
    return 0;
}
