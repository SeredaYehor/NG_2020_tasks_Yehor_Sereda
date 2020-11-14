#include <iostream>

using namespace std;

int main()
{
    int a,b,c,Res;
    int sum = 1;
    int raz = 2;
    int mnog = 3;
    int delenie = 4;
    cout << "Vvedite pervoe chislo:" << endl;
    cin >> a;
    cout << "Vvedite vtoroe chislo:" << endl;
    cin >> b;
    cout << "Vvedite deistvie:" << endl;
    cin >> c;
    if (c == sum)
       {
           Res = a+b;
       }
    if (c == raz)
       {
           Res = a-b;
       }
    if (c == mnog)
       {
           Res = a*b;
       }
    if (c == delenie)
       {
           Res = a/b;
       }
    cout << "Rezultat:" <<Res;
    return 0;
}
