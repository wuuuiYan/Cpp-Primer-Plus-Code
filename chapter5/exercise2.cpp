#include <iostream>
#include <array>

using namespace std;

const int ArSize = 16;

int main()
{
    array<long double, 16> factorials;
    factorials[0] = factorials[1] = 1;

    for (int i = 2; i < 16; i ++)
        factorials[i] = i * factorials[i - 1];

    for (int i = 0; i <= 16; i ++)
        //cout << i << endl;
        cout << i << "! = " << factorials[i] << endl;

    return 0;
}