#ifndef VIDEOCARD_H
#define VIDEOCARD_H
#include"General_info.h"


class Videocard:public General_info
{
    public:
        Videocard();

        void setfamily(string value){family=value;};
        string getfamily(){return family;};

    private:
        string name;
        string family;

        int score;
        int price;
};

#endif // VIDEOCARD_H
