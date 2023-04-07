#include <iostream>
#include "mytime0.h"

using namespace std;

int main()
{
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;

    cout << "coding time = ";
    coding.Show();
    cout << "fixing time = ";
    fixing.Show();

    total = coding.Sum(fixing);
    total.Show();

    return 0;
}