#ifndef COMPUTER_H
#define COMPUTER_H
#include<string.h>
#include<string>
#include "Videocard.h"
#include "CPU.h"
#include "Motherboard.h"

using namespace std;

class Computer
{
    public:
        Computer();

        void List_info();

        void setname(string value){PC_name=value;};
        string getname(){return PC_name;};

        void addVideocard_info(string name, string family, int price, int score);
        void setVideocard(Videocard a);
        Videocard getVideocard(){return Video;};

        void addCPU_info(string name, string manuf, int price, int generic, float frequency, string socket, int score);
        void setCPU(CPU a);
        CPU getCPU(){return Prots;};

        void addMotherboard_info(string manuf, int price, string socket, string model);
        void setMotherboard(Motherboard a);
        Motherboard getMotherboard(){return Mater;};

        void appsum(int a){sum+=a;};
        int getsum(){return sum;};

        string getsocket(){return PC_socket;};

        int get_videocard_score(){return video_score;};

        int get_CPU_score(){return CPU_score;};

    private:
        Videocard Video;
        CPU Prots;
        Motherboard Mater;
        int sum = 0;
        int video_score;
        int CPU_score;
        string PC_socket;
        string PC_name;

};
#endif // COMPUTER_H
