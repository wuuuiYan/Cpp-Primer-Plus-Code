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
        while (!(cin >> golf[i])) //ֱ����ȡ��ȷ�Ż��˳�
        {
            cin.clear();
            while (cin.get() != '\n') //���Ĵ��������
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