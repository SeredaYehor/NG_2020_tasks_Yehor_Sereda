#include <iostream>

using namespace std;

int main()
{
    int arr[5];
    int stars;
    int max_stars=0;
    int number_of_stolbik;
    for(number_of_stolbik=0;number_of_stolbik<5;number_of_stolbik++)
    {
        cout << "zvezdochek v " << number_of_stolbik+1 << " stolbike:";
        cin >> stars;
        if(stars<0)
        {
            cout << "Error:Unacceptable key";
            exit(0);
        }
        arr[number_of_stolbik]=stars;
        if(max_stars<stars)max_stars = stars;
    }
    for(int line = 0;line<=max_stars;line++)
    {
    for(number_of_stolbik=0;number_of_stolbik<5;number_of_stolbik++)
    {
        if(arr[number_of_stolbik]>0)cout << '*';
        else cout << " ";
        arr[number_of_stolbik]--;
    }
    cout<<endl;
    }
    return 0;
}
