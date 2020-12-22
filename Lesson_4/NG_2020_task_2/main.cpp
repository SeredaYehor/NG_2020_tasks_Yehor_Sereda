#include <iostream>

using namespace std;

int stroka = 1;

void endline()
{
    cout << endl;
}

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
        endline();
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
    else endline();
}

void triangle(int x, int y)
{
    if(stroka<=x)
    {
        write_triangle(y,stroka);
        stroka++;
        triangle(x,y);
    }
    stroka = 1;
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

void write_rev_triangle(int y, int x)
{
    if(y<x)
    {
        cout << " ";
        y++;
        write_rev_triangle(y, x);
    }
}

void rev_triangle(int x, int y)
{
    if(stroka<=x)
    {
        write_rev_triangle(0,x-stroka);
        stars(1,stroka);
        endline();
        stroka++;
        rev_triangle(x,y);
    }
    stroka = 1;
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
        endline();
        stroka++;
        upper_triangle(x,stroka);
    }
    stroka = 1;
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
        endline();
        reverse_upper_triangle(x,stroka);
    }
}

int main()
{
    int x;
    cout << "Enter size:";
    cin >> x;
    cube(x,stroka);
    endline();
    triangle(x,stroka);
    endline();
    rev_triangle(x,stroka);
    endline();
    upper_triangle(x,stroka);
    endline();
    reverse_upper_triangle(x,stroka);
    return 0;
}
