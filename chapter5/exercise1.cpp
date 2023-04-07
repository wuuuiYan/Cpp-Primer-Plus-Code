#include <iostream>

using namespace std;

int main()
{
    int minnum, maxnum;
    int sum = 0;

    cout << "Enter the min number: ";
    cin >> minnum;

    cout << "Enter the max number: ";
    cin >> maxnum;

    for (int i = minnum; i <= maxnum; i ++)
        sum += i;

    cout << sum << endl;
    return 0;
}