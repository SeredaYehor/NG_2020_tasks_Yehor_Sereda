#include <iostream>

using namespace std;

int main()
{
    int x,y,z,i,j,k;
    cout << "Enter size:";
    cin >> x;
    i=x-(x-1);
    j=x;
    for (z=1; z <= x; z++)
        {
        for (y=1;y <= x;y++) cout << '*';
        cout << endl;
        }
    cout << endl;
    for (z=1; z <= x; z++)
        {
          for(y=0;y<i;y++) cout << '*';
          i++;
          cout << endl;
        }
    cout << endl;
    k=x;
    for(z=0;z<x;z++)
    {
        for(y=1;y<=x;y++)
        {
            if (y<k) cout << " ";
            else cout << '*';
        }
        k--;
        cout << endl;
    }
    cout << endl;
    for (z=1; z <= x; z++)
        {
            for(y=0;y<j;y++) cout << '*';
            j--;
            cout << endl;
        }
    cout << endl;
    for(z=0;z<x;z++)
    {
        for(y=1;y<=x&&k<x;y++)
        {
            if (y<=k) cout << " ";
            else cout << '*';
        }
        k++;
        cout << endl;
    }
    return 0;
}
