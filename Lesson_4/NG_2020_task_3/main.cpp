#include <iostream>

using namespace std;

string getline(char arr[50])
{
    cout << "Enter string: ";
    cin.getline(arr,50);
    return arr;
}

int num_words(char arr[50],int iter,int number_of_words)
{
    if(arr[iter] != '\0')
    {
        if(((arr[iter]>='a'&&arr[iter]<='z')||(arr[iter]>='A'&&arr[iter]<='Z'))&&(arr[iter+1]<'a'||arr[iter+1]>'z')&&(arr[iter+1]<'A'||arr[iter+1]>'Z'))
        {
           number_of_words+=1;
        }
        iter+=1;
        number_of_words = num_words(arr,iter,number_of_words);
    }
    return number_of_words;
}

int main()
{
    char stroka[50];
    getline(stroka);
    cout << "Number of words=" << num_words(stroka,0,0);
    return 0;
}
