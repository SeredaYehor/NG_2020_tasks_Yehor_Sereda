#ifndef CPU_H
#define CPU_H
#include"General_info.h"


class CPU:public General_info
{
    public:
        CPU();

        void setmanuf(string value){manuf=value;};
        string getmanuf(){return manuf;};

        float getfrequency(){return frequency;};
        void setfrequency(float value){frequency = value;};

        int getgeneric(){return generic;};
        void setgeneric(int value){generic = value;};

        void setsocket(string value){socket=value;};
        string getsocket(){return socket;};


    private:
        string name;
        string manuf;

        float frequency;
        int generic;
        int price;
        int score;

        string socket;

};

#endif // CPU_H
