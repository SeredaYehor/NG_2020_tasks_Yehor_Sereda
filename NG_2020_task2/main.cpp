#include <iostream>

using namespace std;

int main()
{
    float a,b;
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
    cout << "Rezultat: ";
    switch(c)
    {
        case 1:
           cout << a+b;
           break;
        case 2:
           cout << a-b;
           break;
        case 3:
           cout << a*b;
           break;
        case 4:
           cout << a/b;
           break;
        default:
            cout << "Error";
    }
    return 0;
}
