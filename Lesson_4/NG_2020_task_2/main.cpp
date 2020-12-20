#include <iostream>

using namespace std;

int stroka = 1;
int y = 1;

void write_cube(int x,int stroka)
{
    if(stroka<=x)
    {
        cout << '*';
        stroka++;
        write_cube(x,stroka);
    }
    else
    {
        cout << endl;
        stroka=1;
    }
}

void cube(int x,int y)
{
    if(y<=x)
    {
        write_cube(x,stroka);
        y++;
        cube(x,y);
    }
}

void write_triangle(int y,int stroka)
{
    if(y<=stroka)
    {
        cout << '*';
        y++;
        write_triangle(y,stroka);
    }
    else
    {
        cout << endl;
    }
}

void triangle(int x, int y)
{
    if(stroka<=x)
    {
        write_triangle(y,stroka);
        stroka++;
        triangle(x,y);
    }
    else stroka = 1;
}

void stars(int y, int stroka)
{
   if(y<=stroka)
   {
       cout << '*';
       y++;
       stars(y, stroka);
   }
}

void write_rev_triangle(int y , int stroka,int x)
{
    if(y<x-stroka)
    {
        cout << " ";
        y++;
        write_rev_triangle(y, stroka, x);
    }
}

void rev_triangle(int x, int y)
{
    if(stroka<=x)
    {
        write_rev_triangle(0,stroka,x);
        stars(1,stroka);
        cout << endl;
        stroka++;
        rev_triangle(x,y);
    }
    else stroka = 1;
}

void write_upper_triangle(int y, int x)
{
    if(y<=x)
    {
        cout << '*';
        y++;
        write_upper_triangle(y,x);
    }
}

void upper_triangle(int x, int stroka)
{
    if(stroka <= x)
    {
        write_upper_triangle(0,x-stroka);
        cout << endl;
        stroka++;
        upper_triangle(x,stroka);
    }
    else stroka = 1;
}

void write_reverse_upper_triangle(int x,int y)
{
    if(x<y)
    {
        cout << " ";
        x++;
        write_reverse_upper_triangle(x,y);
    }
}

void reverse_upper_triangle(int x,int stroka)
{
    if(stroka<=x)
    {
        write_reverse_upper_triangle(1,stroka);
        stars(0,x-stroka);
        stroka++;
        cout << endl;
        reverse_upper_triangle(x,stroka);
    }
}

int main()
{
    int x;
    cout << "Enter size:";
    cin >> x;
    cube(x,stroka);
    cout << endl;
    triangle(x,stroka);
    cout << endl;
    rev_triangle(x,stroka);
    cout << endl;
    upper_triangle(x,stroka);
    cout << endl;
    reverse_upper_triangle(x,stroka);
    return 0;
}
