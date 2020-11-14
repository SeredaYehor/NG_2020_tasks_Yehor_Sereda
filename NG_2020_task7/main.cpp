#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout << "Vvedite chislo:" << endl;
    cin >> x;
    for(y=0;y<=x;y++)
    {
        cout << y;
        if(y<x) cout << ',';
    }
    return 0;
}
