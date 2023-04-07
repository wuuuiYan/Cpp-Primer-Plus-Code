#ifndef __STONE_H__
#define __STONE_H__

#include <iostream>

using namespace std;

class Stonewt
{
    public:
        enum Type
        {
            STONE,
            POUNDS,
            FLOATPOUNDS
        };
        //ö������Ҳ��һ���Զ�������

    private:
        enum
        {
            Lbs_per_stn = 14
            // һӢʯ����ʮ�İ�
        };
        // static const int Lbs_per_stn = 14;
        int stone;       // Ӣʯ��ɽ�λ�Ĳ���
        double pds_left; // Ӣʯ������λ�Ĳ���
        double pounds;   // ��
        Type type;

    public:
        Stonewt(double lbs);
        Stonewt(int stn, double lbs);
        Stonewt();

        void Set_Type(Type m);

        Stonewt operator+(const Stonewt &s) const;
        Stonewt operator-(const Stonewt &s) const;
        Stonewt operator*(double n) const;

        //void show_lbs() const;
        //void show_stn() const;
        //������������ʹ����Ԫ��������
        friend ostream &operator<<(ostream &os, const Stonewt &s);
    };

#endif