#include <iostream>

using namespace std;

const int Max = 5;

int main()
{
    int golf[Max];

    cout << "Please enter your golf scores.\n";
    cout << "You must enter" << Max << " rounds.\n";
    int i;

    for (i = 0; i < Max; i ++)
    {
        cout << "round #" << i + 1 << ": ";
        while (!(cin >> golf[i])) //直到读取正确才会退出
        {
            cin.clear();
            while (cin.get() != '\n') //消耗错误的输入
                continue;
            cout << "Please enter a number: ";
        }
    }

    double total = 0;
    for (int j = 0; j < Max; j ++)
        total += golf[j];

    cout << total / Max << " = average score " << Max << " round." << endl;

    return 0;
}