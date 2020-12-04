#include <iostream>

using namespace std;

int main()
{
    int stars,max_stars = 0;
    int arr[20];
    int index;
    for(index = 0;index<20;index++)
    {
        cout << "Enter number:";
        cin >> stars;
        if(max_stars<stars) max_stars = stars;
        if(stars<=0) break;
        arr[index]=stars;
    }
    char line_arr[max_stars];
    for(int index_2=0;index_2<20;index_2++)
    {
        for(int i = 0;i<max_stars;i++)
        {
            line_arr[i] = '-';
            if(i == (max_stars-arr[i]/2))
                for(int k = i;k<arr[i];k++)line_arr[k]='*';
            cout << line_arr[i];
        }
    }
    return 0;
}
