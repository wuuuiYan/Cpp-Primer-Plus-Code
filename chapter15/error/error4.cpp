#include <iostream>
#include <cstdlib>
#include "exc_mean.h"
#include <cmath>

using namespace std;

double hmean(double a, double b);
double gmean(double a, double b);

int main()
{
    double x, y, z;

    cout << "Enter two numbers: ";
    while(cin >> x >> y)
    {
        try
        {
            z = hmean(x, y);
            cout << "Harmonic mean of " << x << " and " << y << " is " << z << endl;
            z = gmean(x, y);
            cout << "Geometric mean of " << x << " and " << y << " is " << z << endl;
        }
        catch(bad_hmean &bh)
        {
            bh.message();
            cout << "Enter a new pair of arguments: ";
            continue;
        }
        catch(bad_gmean &bg)
        {
            cout << bg.message();
            cout << "Value used: " << bg.v1 << ", " << bg.v2 << endl;
            cout << "Sorry, quit now" << endl;
            break;
        }

        cout << "Harmonic mean of " << x << " and " << y << " is " << z << endl;
        cout << "Enter next set of number: ";
    }

    return 0;
}

double hmean(double a, double b)
{
    if(a == -b)
        throw bad_hmean(a, b);

    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
    if (a < 0 || b < 0)
        throw bad_gmean(a, b);
    
    return sqrt(a * b);
}