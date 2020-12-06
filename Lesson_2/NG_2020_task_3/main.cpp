#include <iostream>

using namespace std;

int main()
{
    int stars,max_stars = 0;
    int arr[20] ={0};
    int index,i;
    for(index = 0;index<20;index++)
    {
        cout << "Enter number:";
        cin >> stars;
        if(max_stars<stars) max_stars = stars;
        if(stars<=0) break;
        arr[index]=stars;
    }
    for(i=0;arr[i]!=0;i++)
    {
      for(index=0;index<(max_stars-arr[i])/2;index++)
      {
          cout << ' ';
      }
      for(index=0;index<arr[i];index++)
      {
          cout << '*';
      }
      cout << endl;
    }
    return 0;
}
