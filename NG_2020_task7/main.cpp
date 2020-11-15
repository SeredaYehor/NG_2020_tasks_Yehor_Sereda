#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout << "Enter number:";
    cin >> x;
    cout << '0';
    for(y=1;!(y>x);y++)
    {
        cout<< ',' << y;
    }
    return 0;
}
