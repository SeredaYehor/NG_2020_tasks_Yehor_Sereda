#include <iostream>

using namespace std;

int main()
{
    int income;
    cout << "Skolko ti zarabativaesh?" << endl;
    cin >> income;
    if (income >1000) if(income < 1000000)cout <<  "Tak derzhat!";
    if (income > 999999) cout << "Ti millioner!";
    if (income < 1000) cout << "Rabotai bolshe";
    cout << ".. no ti molodec!";
    return 0;
}
