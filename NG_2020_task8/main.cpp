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
        for(y=0;y<=z;y++) cout << '*';
        for(y=0;y<z;y++)cout <<'*';
        cout << endl;
    }
    for(z=0;z<=x;z++)
    {
            if(z==x-1) cout << '*';
            else cout << " ";
    }
    cout << endl;

    return 0;
}
