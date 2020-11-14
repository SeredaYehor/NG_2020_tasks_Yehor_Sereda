#include <iostream>

using namespace std;

int main()
{
    int oreshki,oreshki_v_shishke,shishki;
    cout << "Skolko oreshkov nuzhno belochke:" << endl;
    cin >> oreshki;
    cout << "Skolko oreshkov v odnoy shishke:" << endl;
    cin >> oreshki_v_shishke;
    cout << "Skolko shishek bylo sobrano: " << endl;
    cin >> shishki;oreshki>=oreshki_v_shishke*shishki;
    if(oreshki<=oreshki_v_shishke*shishki)
    {
      cout << "Yes";
    }
    if(oreshki>oreshki_v_shishke*shishki)
    {
      cout << "No";
    }
    return 0;
}
