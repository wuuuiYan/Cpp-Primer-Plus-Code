#include <iostream>

using namespace std;

int main()
{
    const string Month[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int sale_num[3][12];
    int sum[3] = {0, 0, 0};
    int tot = 0;

    for (int i = 0; i < 3; i ++)
    {
        cout << "Starting " << i + 1 << " year's data." << endl;
        for (int j = 0; j < 12; j ++)
        {
            cout << "Enter the sale number of " << Month[j] << ": ";
            cin >> sale_num[i][j];
        }
            
    }

    cout << "Input Done!" << endl;

    for (int i = 0; i < 3; i ++)
    {
        cout << "Starting " << i + 1 << "year's data." << endl;
        for (int j = 0; j < 12; j ++)
        {
            cout << Month[j] << ": " << sale_num[i][j] << endl;
            sum[i] += sale_num[i][j];
            
        }
        cout << i + 1 << " year's total sale is" << sum[i] << endl;
        tot += sum[i];
    }

    cout << tot << endl;

    return 0;
}