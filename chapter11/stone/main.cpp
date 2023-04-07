#include <iostream>
#include "stonewt.h"


using namespace std;

int main()
{
    //赋值运算符左右两侧类型不一致
    Stonewt incognito = 275; // Stonewt incognito(275); Stonewt incognito = Stonewt(275);
    Stonewt wolfe(285.7);    // Stonewt(285.7);
    Stonewt taft(21, 8);

    incognito.show_stn();
    wolfe.show_stn();
    taft.show_lbs();

    cout << "------------------" << endl;
    incognito = 276.8;
    incognito.show_stn();
    taft = 325;
    taft.show_lbs();

    return 0;
}