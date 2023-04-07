#ifndef __STONE_H__
#define __STONE_H__

#include <iostream>

using namespace std;

class Stonewt
{
    private:
        enum
        {
            Lbs_per_stn = 14
            //一英石等于十四磅
        };
        // static const int Lbs_per_stn = 14;
        int stone; //英石完成进位的部分
        double pds_left; //英石不满进位的部分
        double pounds; //磅
    public:
        //explicit Stonewt(double lbs);
        Stonewt(double lbs);
        Stonewt(int stn, double lbs);
        Stonewt();

        void show_lbs() const;
        void show_stn() const;

        operator double() const;
        operator int() const;
};

#endif