#include "Computer.h"
#include <iostream>
#include <cstring>

Computer::Computer()
{
}

void Computer::List_info()
{
    Computer PC;

    if(Video.getprice()>0&&Video.getscore()>0)
    {
        cout << "\nVideocard\n" << endl;
        cout << "Name:" << Video.getname()  << endl;
        cout << "Family:"  << Video.getfamily() << endl;
        cout << "Score:" << Video.getscore() << '\n' << endl;
    }
    if(Prots.getprice()>0&&Prots.getscore()>0&&Prots.getfrequency()>0&&Prots.getgeneric()>0)
    {
        cout << "CPU\n" << endl;
        cout << "Name:" << Prots.getname() << endl;
        cout << "Manufacture:" << Prots.getmanuf() << endl;
        cout << "Frequency:" << Prots.getfrequency() << endl;
        cout << "Generation:" << Prots.getgeneric() << endl;
        cout << "Socket:" << Prots.getsocket() << '\n' << endl;
    }
    if(Mater.getprice()>0)
    {
        cout << "Motherboard\n" << endl;
        cout << "Model:" << Mater.getmodel() << endl;
        cout << "Manufacture:" << Mater.getmanuf() << endl;
        cout << "Socket:" <<  Mater.getsocket() << endl;
    }
    cout << "Everything will costs:" << getsum() << '\n' << endl;
}

void Computer::addVideocard_info (string name, string family, int price, int score)
{
    Videocard Video;

    Video.setname(name);
    Video.setfamily(family);
    Video.setprice(price);
    Video.setscore(score);

    if(price>0&&score>0)
    {
        setVideocard(Video);
    }
    else cout << "Error! Unacceptable price or score of Videocard." << endl;
}

void Computer::addCPU_info(string name, string manuf, int price, int generic, float frequency, string socket, int score)
{
    CPU Prots;

    Prots.setname(name);
    Prots.setmanuf(manuf);
    Prots.setgeneric(generic);
    Prots.setfrequency(frequency);
    Prots.setsocket(socket);
    Prots.setprice(price);
    Prots.setscore(score);

    if(price>0&&score>0&&frequency>0&&generic>0)
    {
        setCPU(Prots);
    }
    else cout << "Error! Unacceptable price or score of CPU." << endl;
}

void Computer:: addMotherboard_info(string manuf, int price, string socket, string model)
{
    Motherboard Mater;

    Mater.setmodel(model);
    Mater.setmanuf(manuf);
    Mater.setsocket(socket);
    Mater.setprice(price);

    if(price>0)
    {
        setMotherboard(Mater);
    }
    else cout << "Error! Unacceptable price or score of Motherboard." << endl;
}

void Computer::setCPU(CPU a)
{
    if(a.getsocket().compare(Mater.getsocket())==0||Mater.getsocket().compare("NOSOCKET")==0)
    {
        Prots = a;
        CPU_score = Prots.getscore();
        PC_socket=Prots.getsocket();
        appsum(Prots.getprice());
    }
    else cout << "Error, different sockets!" << endl;
}

void Computer::setMotherboard(Motherboard a)
{
    if(a.getsocket().compare(Prots.getsocket())==0||Prots.getsocket().compare("NOSOCKET")==0)
    {
        Mater = a;
        sum+=Mater.getprice();
    }
    else cout << "Error, different sockets!" << endl;
}

void Computer::setVideocard(Videocard a)
{
    Video = a;
    video_score = Video.getscore();
    sum+=Video.getprice();
}
