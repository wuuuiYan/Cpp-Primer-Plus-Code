#include <iostream>
#include "stonewt.h"


using namespace std;

int main()
{
    //赋值运算符左右两侧类型不一致
    Stonewt incognito = 275; // Stonewt incognito(275); Stonewt incognito = Stonewt(275);
    Stonewt wolfe(285.7);    // Stonewt(285.7);
    Stonewt taft(21, 8);

    incognito.Set_Type(Stonewt::POUNDS);
    cout << incognito << endl;
    wolfe.Set_Type(Stonewt::FLOATPOUNDS);
    cout << wolfe << endl;
    taft.Set_Type(Stonewt::STONE);
    cout << taft << endl;

    taft = incognito + wolfe;
    taft.Set_Type(Stonewt::STONE);
    cout << "taft = " << taft << endl;

    taft = wolfe - incognito;
    taft.Set_Type(Stonewt::FLOATPOUNDS);
    cout << "taft = " << taft << endl;

    incognito = incognito * 2;
    incognito.Set_Type(Stonewt::POUNDS);
    cout << incognito << endl;

    return 0;
}