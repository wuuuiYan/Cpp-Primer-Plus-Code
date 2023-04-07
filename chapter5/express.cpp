#include <iostream>

using namespace std;

int main()
{
    int x = 1;

    cout.setf(ios_base::boolalpha);

    cout << "The expression x < 3 has the value ";
    cout << (x < 3) << endl;

    cout << "The expression x > 3 has the value ";
    cout << (x > 3) << endl;

    return 0;
}