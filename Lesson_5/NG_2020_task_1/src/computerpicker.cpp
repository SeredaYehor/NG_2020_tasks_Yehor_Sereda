#include "computerpicker.h"
#include <iostream>

computerpicker::computerpicker()
{
}

void computerpicker:: addComputer(Computer PC)
{
    Computers.push_back(PC);
}

void computerpicker:: Show()
{
    for(Computer PC : Computers)
    {
        cout << PC.getname() << '\n';
        PC.List_info();
    }
}

void computerpicker::find_for_price(int price)
{
    for(Computer PC : Computers)
    {
        if(PC.getsum()==price)
        {
            cout << PC.getname() << '\n';
            PC.List_info();
        }
    }
}

void computerpicker:: find_for_socket(string socket)
{
    for(Computer PC : Computers)
    {
        if(PC.getsocket().compare(socket)==0)
        {
            cout << PC.getname() << '\n';
            PC.List_info();
        }
    }
}

void computerpicker:: find_for_videocard_banchmark(int score)
{
    for(Computer PC : Computers)
    {
        if(PC.get_videocard_score()==score)
        {
            cout << PC.getname() << '\n';
            PC.List_info();
        }
    }
}

void computerpicker::find_for_CPU_banchmark(int score)
{
    for(Computer PC : Computers)
    {
        if(PC.get_CPU_score()==score)
        {
            cout << PC.getname() << '\n';
            PC.List_info();
        }
    }
}
