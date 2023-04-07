#include <iostream>
#include "Plorg.h"

using namespace std;

int main()
{
    Plorg p1;
    p1.show();

    p1.reset(100);
    p1.show();

    return 0;
}