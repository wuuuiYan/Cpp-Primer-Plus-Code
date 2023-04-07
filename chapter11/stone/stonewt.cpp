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

void Stonewt::show_lbs() const
{
    cout << pounds << " pounds." << endl;
}

void Stonewt::show_stn() const
{
    cout << stone << " stone, " << pds_left << " pounds." << endl;
}