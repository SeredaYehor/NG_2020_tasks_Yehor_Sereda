#ifndef MOTHERBOARD_H
#define MOTHERBOARD_H
#include"Motherboard.h"
#include"General_info.h"

class Motherboard:public General_info
{
    public:
        Motherboard();

        void setmodel(string value){model=value;};
        string getmodel(){return model;};

        void setsocket(string value){socket=value;};
        string getsocket(){return socket;};

        void setmanuf(string value){manuf=value;};
        string getmanuf(){return manuf;};

    private:
        string manuf;
        string model;
        string socket;

        int price = 0;
};

#endif // MOTHERBOARD_H
