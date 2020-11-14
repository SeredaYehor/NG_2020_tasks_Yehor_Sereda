#include <iostream>

using namespace std;

int main()
{
    int x,symbol,stroka,i,stroka2,white_space;
    cout << "Enter size:";
    cin >> x;
    i=x-(x-1); //stroka-1
    stroka2=x;
    for (stroka=1; stroka <= x; stroka++)
        {
        for (symbol=1;symbol<= x;symbol++) cout << '*';
        cout << endl;
        }
    cout << endl;
    for (stroka=1; stroka <= x; stroka++)
        {
          for(symbol=0;symbol<i;symbol++) cout << '*';
          i++;
          cout << endl;
        }
    cout << endl;
    white_space=x;
    for(stroka=0;stroka<x;stroka++)
    {
        for(symbol=1;symbol<=x;symbol++)
        {
            if (symbol<white_space) cout << " ";
            else cout << '*';
        }
        white_space--;
        cout << endl;
    }
    cout << endl;
    for (stroka=1; stroka <= x; stroka++)
        {
            for(symbol=0;symbol<stroka2;symbol++) cout << '*';
            stroka2--;
            cout << endl;
        }
    cout << endl;
    for(stroka=0;stroka<x;stroka++)
    {
        for(symbol=1;symbol<=x&&white_space<x;symbol++)
        {
            if (symbol<=white_space) cout << " ";
            else cout << '*';
        }
        white_space++;
        cout << endl;
    }
    return 0;
}
