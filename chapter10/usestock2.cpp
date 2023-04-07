#include <iostream>
#include "stock20.h"

using namespace std;

const int STKS = 4;

int main()
{
    Stock stocks[STKS] = {
        Stock("Nano", 12, 20.0),
        Stock("Boffo", 200, 2.0),
        Stock("Mono", 130, 3.25),
        Stock("Fleep", 60, 6.5)
    };

    cout << "Stock holding: " << endl;
    int st;
    for (st = 0; st < 4; st ++)
        stocks[st].show();

    const Stock * top = &stocks[0];
    //指向常量的指针，但指针可以更改指向其他变量

    for (st = 1; st < STKS; st ++)
    {
        top = &(top->topval(stocks[st]));
    }

    cout << "\nMost valuable holding: " << endl;
    (*top).show();

    return 0;
}
