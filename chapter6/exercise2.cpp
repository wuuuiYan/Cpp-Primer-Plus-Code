#include <iostream>
#include <array>

using namespace std;

const int MAX = 10;

int main()
{
    array<double, MAX> donation;

    double input;
    double sum = 0, average = 0;
    int cnt = 0, num = 0;

    cout << "Please enter the double numerial: ";

    while (cin >> input)
    {
        donation[cnt++] = input; //先把input放到数组中，再把计数值加一
        sum += input;
        if (cnt == 10)
            break;
        cout << "Please enter the double numerial: ";
    }

    average = sum / cnt;

    for (int i = 0; i < cnt; i ++)
    {
        if (donation[i] > average)
        {
            num++;
        }
    }

    cout << "Average = " << average << endl;
    cout << num << " numbers are bigger than average." << endl;

    return 0;
}