#include "stonewt.h"
#include <iostream>

Stonewt::Stonewt(double lbs)
{
    stone = (int)lbs / Lbs_per_stn; //ȡ��λ�Ĳ���
    pds_left = (int)lbs % Lbs_per_stn + lbs - (int)lbs; //ȡ����λ�Ĳ���
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
    return (int)(pounds + 0.5); //������ʵ������������
}

Stonewt::operator double() const
{
    return pounds;
}
*/

Stonewt Stonewt::operator+(const Stonewt &s) const
{
    return Stonewt(pounds + s.pounds);
    //������һ����Ķ���ʱ�����ȵ��ù��캯�����
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