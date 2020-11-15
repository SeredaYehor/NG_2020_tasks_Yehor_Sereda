#include <iostream>

using namespace std;

int main()
{
    int x,stroka,y;
    cout << "Enter size:";
    cin >> x;
    for (stroka=1; stroka <= x; stroka++)
        {
        for (y=1;y <= x;y++) cout << '*';
        cout << endl;
        }
    cout << endl;
    for (stroka=0; stroka < x;)
        {
          for(y=0;y<=stroka;y++) cout << '*';
          stroka++;
          cout << endl;
        }
    cout << endl;
    for(stroka=0;stroka<x;stroka++)
    {
        for(y=1;y<=x;y++)
        {
            if (y<x-stroka) cout << " ";
            else cout << '*';
        }
        cout << endl;
    }
    cout << endl;
    for (stroka=1; stroka <= x; stroka++)
        {
            for(y=0;y<=x-stroka;y++) cout << '*';
            cout << endl;
        }
    cout << endl;
    for(stroka=0;stroka<x;)
    {
        for(y=1;y<=x;y++)
        {
            if (y<=stroka) cout << " ";
            else cout << '*';
        }
        stroka++;
        cout << endl;
    }
    return 0;
}
