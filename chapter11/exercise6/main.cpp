#include <iostream>
#include "stonewt.h"

using namespace std;

const int SIZE = 6;

int main()
{
    Stonewt stone_arr[SIZE] = {275, Stonewt(285.7), Stonewt(21, 8)};
    Stonewt max = stone_arr[0], min = stone_arr[0];
    Stonewt temp = Stonewt(11, 0.0);
    int cnt = 0;

    for (int i = 3; i < SIZE; i++)
    {
        double input = 0;
        cout << "Enter number " << i + 1 << " element(in pounds)." << endl;
        cin >> input;
        stone_arr[i] = input;
    }

    for (int i = 0; i < SIZE; i++)
    {
        max = (max > stone_arr[i]) ? max : stone_arr[i];
        min = (min < stone_arr[i]) ? min : stone_arr[i];
        if (stone_arr[i] >= temp)
            cnt++;
    }

    cout << "The max object is: ";
    max.show_lbs();
    cout << "The min object is: ";
    min.show_lbs();
    cout << cnt << " objects are heavier than temp." << endl;

    return 0;
}