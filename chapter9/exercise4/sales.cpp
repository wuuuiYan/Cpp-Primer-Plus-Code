#include "sales.h"
#include <algorithm>

using namespace std;

namespace SALES
{
    void setSales(Sales &s, const double ar[], int n)
    {
        double total = 0.0;
        int i;

        for (i = 0; i < n && i < 4; i ++)
        {
            s.sales[i] = ar[i];
            total += ar[i];
        }

        s.average = total / i;
        s.max = s.min = s.sales[0];
        for (int j = 1; j < i; j ++)
        {
            s.max = max(s.max, s.sales[j]);
            // s.max = (s.max > s.sales[j]) ? s.max : sales[j];
            s.min = min(s.min, s.sales[j]);
            // s.min = (s.min < s.sales[j]) ? s.min : sales[j];
        }

        if (n < 4)
        {
            for (int k = n; k < 4; k ++)
                s.sales[k] = 0;
        }
    }

    void setSales(Sales &s)
    {
        double total = 0.0;

        cout << "Enter four sales quarters: " << endl;
        for (int i = 0; i < QUARTERS; i ++)
        {
            cout << "#" << i + 1 << ": ";
            cin >> s.sales[i];
            total += s.sales[i];

            if (i == 0)
                s.max = s.min = s.sales[i];
            else
            {
                s.max = (s.max > s.sales[i]) ? s.max : s.sales[i];
                s.min = (s.min < s.sales[i]) ? s.min : s.sales[i];
            }
        }
        s.average = total / QUARTERS;
    }

    void showSales(const Sales &s)
    {
        cout << "Sales of 4 quarters: " << endl;
        for (int i = 0; i < QUARTERS; i ++)
            cout << s.sales[i] << " ";
        cout << endl;

        cout << "Average = " << s.average << endl;
        cout << "Max = " << s.max << endl;
        cout << "Min = " << s.min << endl;
    }
}