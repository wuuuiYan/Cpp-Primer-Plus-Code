#include "stonewt.h"
#include <iostream>

Stonewt::Stonewt(double lbs)
{
    stone = (int)lbs / Lbs_per_stn; //取进位的部分
    pds_left = (int)lbs % Lbs_per_stn + lbs - (int)lbs; //取不进位的部分
    pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt()
{
    stone = pds_left = pounds = 0;
}

void Stonewt::Set_Type(Type m)
{
    type = m;
}

/*
void Stonewt::show_lbs() const
{
    cout << pounds << " pounds." << endl;
}

void Stonewt::show_stn() const
{
    cout << stone << " stone, " << pds_left << " pounds." << endl;
}


Stonewt::operator int() const
{
    return (int)(pounds + 0.5); //本质上实现了四舍五入
}

Stonewt::operator double() const
{
    return pounds;
}
*/

Stonewt Stonewt::operator+(const Stonewt &s) const
{
    return Stonewt(pounds + s.pounds);
    //当返回一个类的对象时，优先调用构造函数完成
}

Stonewt Stonewt::operator-(const Stonewt &s) const
{
    return Stonewt(pounds - s.pounds);
}

Stonewt Stonewt::operator*(double n) const
{
    return Stonewt(pounds * n);
}

ostream &operator<<(ostream &os, const Stonewt &s)
{
    if (s.type == Stonewt::STONE)
        os << s.stone << " stones, " << s.pds_left << " pounds.";
    else if (s.type == Stonewt::POUNDS)
        os << int(s.pounds) << " pounds.";
    else if (s.type == Stonewt::FLOATPOUNDS)
        os << s.pounds << " pounds.";
    else
        os << "Invalid Type!";

    return os;
}