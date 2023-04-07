#include <iostream>

using namespace std;

int main()
{
    double x = (double)10 / 3; //C”Ô—‘–¥∑®
    cout << "x = " << x << endl;

    double y = static_cast<double>(10) / 3; //C++–¥∑®
    cout << "y = " << y << endl;

    return 0;
}