#ifndef __SALES_H__
#define __SALES_H__

#include <iostream>

namespace SALES
{
    const int QUARTERS = 4;
    struct Sales
    {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };

    void setSales(Sales &s, const double ar[], int n);
    void setSales(Sales &s); //КЏЪ§жиди
    void showSales(const Sales &s);
}

#endif