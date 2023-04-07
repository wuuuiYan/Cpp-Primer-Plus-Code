#include <iostream>
#include <cstring>
#include "golf.h"

using namespace std;

const int SIZE = 2;

int main()
{
    golf g[SIZE];
    int cnt = 0;

    cout << "Please enter the information of golf players: " << endl;
    while ((cnt < SIZE) && (setgolf(g[cnt])))
    {
        cout << "Please enter next players: " << endl;
        cnt++;
    }

    cout << "\nShow all golf players information: " << endl;
    for (int i = 0; i < cnt; i ++)
        showgolf(g[i]);

    cout << "\nReset all the players information: " << endl;
    for (int i = 0; i < cnt; i ++)
    {
        handicap(g[i], 90);
        showgolf(g[i]);
    }

        return 0;
}