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
            //һӢʯ����ʮ�İ�
        };
        // static const int Lbs_per_stn = 14;
        int stone; //Ӣʯ��ɽ�λ�Ĳ���
        double pds_left; //Ӣʯ������λ�Ĳ���
        double pounds; //��
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