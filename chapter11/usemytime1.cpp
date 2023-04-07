#include <iostream>
#include "mytime1.h"

using namespace std;

int main()
{
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total, planning;

    cout << "coding time = ";
    coding.Show();
    cout << "fixing time = ";
    fixing.Show();

    // total = coding.Sum(fixing);
    total = coding + fixing;
    planning = coding.operator+(fixing);
    total.Show();
    planning.Show();

    return 0;
}