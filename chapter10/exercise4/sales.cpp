#include "sales.h"
#include <algorithm>

using namespace std;

namespace SALES
{
    Sales::Sales(const double ar[], int n)
    {
        double total = 0.0;
        int i;

        for (i = 0; i < n && i < 4; i ++)
        {
            sales[i] = ar[i];
            total += ar[i];
        }

        average = total / i;
        max = min = sales[0];
        for (int j = 1; j < i; j ++)
        {
            //max = max(max, sales[j]);
            max = (max > sales[j]) ? max : sales[j];
            //min = min(min, sales[j]);
            min = (min < sales[j]) ? min : sales[j];
        }

        if (n < 4)
        {
            for (int k = n; k < 4; k ++)
                sales[k] = 0;
        }
    }

   Sales::Sales()
    {
        double total = 0.0;

        cout << "Enter four sales quarters: " << endl;
        for (int i = 0; i < QUARTERS; i ++)
        {
            cout << "#" << i + 1 << ": ";
            cin >> sales[i];
            total += sales[i];

            if (i == 0)
                max = min = sales[i];
            else
            {
                max = (max > sales[i]) ? max : sales[i];
                min = (min < sales[i]) ? min : sales[i];
            }
        }
        average = total / QUARTERS;
    }

    void Sales::showSales() const
    {
        cout << "Sales of 4 quarters: " << endl;
        for (int i = 0; i < QUARTERS; i ++)
            cout << sales[i] << " ";
        cout << endl;

        cout << "Average = " << average << endl;
        cout << "Max = " << max << endl;
        cout << "Min = " << min << endl;
    }
}