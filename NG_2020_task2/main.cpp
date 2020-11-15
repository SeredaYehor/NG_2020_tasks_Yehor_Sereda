#include <iostream>

using namespace std;

int main()
{
    float a,b,Res;
    int c;
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
    switch(c)
    {
        case 1:
           Res = a+b;
           cout << "Rezultat:" <<Res;
           break;
        case 2:
           Res = a-b;
           cout << "Rezultat:" <<Res;
           break;
        case 3:
           Res = a*b;
           cout << "Rezultat:" <<Res;
           break;
        case 4:
           Res = a/b;
           cout << "Rezultat:" <<Res;
           break;
    }
    return 0;
}
