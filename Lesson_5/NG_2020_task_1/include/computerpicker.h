#ifndef COMPUTERPICKER_H
#define COMPUTERPICKER_H
#include <vector>
#include "Computer.h"
#include <iostream>

using namespace std;



class computerpicker
{
    public:
        computerpicker();

        void addComputer(Computer PC);

        void find_for_price(int price);

        void find_for_socket(string socket);

        void find_for_videocard_banchmark(int score);

        void find_for_CPU_banchmark(int score);

        void Show();

    private:
        vector<Computer> Computers;

};
#endif // COMPUTERPICKER_H
