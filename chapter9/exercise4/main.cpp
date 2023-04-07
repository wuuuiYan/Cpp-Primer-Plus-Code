#include <iostream>
#include "sales.h"

using namespace std;

int main()
{
    using namespace SALES; //一定要记得声明用户自己定义的名称空间

    double ar[4] = {11.1, 22.2, 33.3, 44.4};
    Sales sl;
    setSales(sl, ar, 3);
    showSales(sl);

    setSales(sl);
    showSales(sl);

    return 0;
}