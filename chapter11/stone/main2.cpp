#include <iostream>
#include "stonewt2.h"


using namespace std;

int main()
{
    Stonewt taft(10, 8);

    taft = 2.0 * taft;
    taft.show_stn();
    taft.show_lbs();

    return 0;
}