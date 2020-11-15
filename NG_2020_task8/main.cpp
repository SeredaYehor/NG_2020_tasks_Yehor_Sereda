#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    cout << "Enter the size of a tree:" << endl;
    cin >> x;
    for(z=0;z<x;z++)
    {
        for(y=1;y<x-z;y++) cout << " ";
        for(int y=0;y<=2*z;y++) cout << '*';
        cout << endl;
    }
    for(z=0;z<x-1;z++) cout << " ";
    cout << '*' << endl;
    return 0;
}
