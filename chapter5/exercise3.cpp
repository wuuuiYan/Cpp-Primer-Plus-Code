#include <iostream>

using namespace std;

int main()
{
    double num, sum = 0;

    do
    {
        cout << "Please enter a number to add: ";
        cin >> num;

        if (num != 0)
        {
            sum += num;
            cout << "sum = " << sum << endl;
        }
        else
        {
            cout << "This program is finished!" << endl;
        }
    } while (num != 0);

    return 0;
}