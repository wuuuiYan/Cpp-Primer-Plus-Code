#include <iostream>
#include "mytime4.h"

using namespace std;

int main()
{
    Time coding(4, 35);
    Time fixing(2, 47);
    Time total, diff, adjusted;

    cout << "coding time = " << coding << endl;
    cout << "fixing time = " << fixing << endl;

    total = coding + fixing;
    cout << total << endl;

    diff = coding - fixing;
    cout << diff << endl;

    adjusted = coding * 1.5;
    //adjusted = 1.5 * coding;
    cout << adjusted << endl;

    adjusted = 1.5 * coding;
    cout << adjusted << endl;

    cout << "***************" << endl;
    cout << coding << '\n' << fixing << endl;

    return 0;
}