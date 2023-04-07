#include "stonewt2.h"
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

Stonewt Stonewt::operator*(double mult) const
{
    return Stonewt(pounds * mult);
}

Stonewt operator*(double mult, const Stonewt &s)
{
    return Stonewt(mult * s.pounds);
    //return s * mult;
}