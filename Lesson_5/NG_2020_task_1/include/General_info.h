#ifndef GENERAL_INFO_H
#define GENERAL_INFO_H
#include<string>

using namespace std;

class General_info
{
    public:
        General_info();

        int getprice(){return price;};
        void setprice(int value){price = value;};

        void setname(string value){name=value;};
        string getname(){return name;};

        int getscore(){return score;};
        void setscore(int value){score = value;};


    private:

        string name;

        int score;
        int price;
};

#endif // GENERAL_INFO_H
