#include <iostream>

using namespace std;

int main()
{
    const string Month[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int sale_num[12];
    int sum = 0;

    for (int i = 0; i < 12; i ++)
    {
        cout << "Enter the sale number of " << Month[i] << ": ";
        cin >> sale_num[i];
    }

    cout << "Input Done!" << endl;

    for (int i = 0; i < 12; i ++)
    {
        cout << Month[i] << ": " << sale_num[i] << endl;
        sum += sale_num[i];
    }

    cout << sum << endl;

    return 0;
}