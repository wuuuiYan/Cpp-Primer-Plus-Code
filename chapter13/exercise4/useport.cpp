#include <iostream>
#include <cstring>
#include "port.h"

using namespace std;

int main()
{
    Port p1("ABC", "sweet", 200);
    cout << p1 << endl;
    cout << "---------------" << endl;

    VintagePort vp1("EFG", "vintage", 300, "Old Jack", 40);
    cout << vp1 << endl;
    cout << "---------------" << endl;

    return 0;
}