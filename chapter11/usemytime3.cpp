#include <iostream>
#include "mytime3.h"

using namespace std;

int main()
{
    Time coding(4, 35);
    Time fixing(2, 47);
    Time total, diff, adjusted;

    cout << "coding time = ";
    coding.Show();
    cout << "fixing time = ";
    fixing.Show();

    total = coding + fixing;
    total.Show();

    diff = coding - fixing;
    diff.Show();

    adjusted = coding * 1.5;
    //adjusted = 1.5 * coding;
    adjusted.Show();

    adjusted = 1.5 * coding;
    adjusted.Show();

    return 0;
}