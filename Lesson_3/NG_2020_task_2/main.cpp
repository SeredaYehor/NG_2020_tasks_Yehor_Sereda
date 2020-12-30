#include <iostream>

using namespace std;

int main()
{
    char stroka[50];
    int long_word = 0,long_word_next=1,position = 0, iter,false_sym;
    cout << "Enter string:";
    cin.getline(stroka,50);
    for(iter = 0;stroka[iter] != '\0';iter++)
    {
        if((stroka[iter]>='a'&&stroka[iter]<='z')||(stroka[iter]>='A'&&stroka[iter]<='Z'))
        {
            long_word_next++;
            false_sym=0;
            if(long_word<long_word_next)
            {
                long_word = long_word_next;
                position=iter+1-long_word;
            }
        }
        else
        {
            long_word_next = 0;
            false_sym++;
        }
    }
    cout << "Result:";
    for(iter = 0; iter<long_word;iter++)
    {
        if(position+iter>=0)cout << stroka[position+iter];
    }
    return 0;
}
