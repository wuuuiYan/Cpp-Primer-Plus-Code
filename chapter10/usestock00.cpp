#include <iostream>
#include "stock00.h"

using namespace std;

int main()
{
    Stock fluffy_the_car;
    fluffy_the_car.acquire("NanoSmart", 20, 12.5);
    fluffy_the_car.show();

    fluffy_the_car.buy(15, 18.125);
    fluffy_the_car.show();

    fluffy_the_car.sell(400, 20.0);
    fluffy_the_car.show();

    fluffy_the_car.buy(300000, 42.125);
    fluffy_the_car.show();

    fluffy_the_car.sell(300000, 0.125);
    fluffy_the_car.show();

    return 0;
}
