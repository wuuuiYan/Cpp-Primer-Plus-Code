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
        //枚举类型也是一种自定义类型

    private:
        enum
        {
            Lbs_per_stn = 14
            // 一英石等于十四磅
        };
        // static const int Lbs_per_stn = 14;
        int stone;       // 英石完成进位的部分
        double pds_left; // 英石不满进位的部分
        double pounds;   // 磅
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
        //输出运算符必须使用友元函数重载
        friend ostream &operator<<(ostream &os, const Stonewt &s);
    };

#endif