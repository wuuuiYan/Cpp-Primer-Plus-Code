#include <iostream>
#include "worker.h"
#include <cstring>

using namespace std;

const int SIZE = 3;

int main()
{
    Worker *lolas[SIZE];

    int i;
    for (i = 0; i < SIZE; i ++)
    {
        char choice;

        cout << "Enter the employee category: " << endl;
        cout << "w: waiter  s: singer   t: singing waiter    q: quit" << endl;
        cin >> choice;

        while(strchr("wstq", choice) == NULL)
        {
            cout << "Please enter a w, s, t, q :";
            cin >> choice;
        }
        if (choice == 'q')
            break;
        switch(choice)
        {
            case 'w':
                lolas[i] = new Waiter;
                break;
            case 's':
                lolas[i] = new Singer;
                break;
            case 't':
                lolas[i] = new SingingWaiter; //将调佣默认构造函数
                break;
        }
        while(cin.get() != '\n');
        lolas[i]->Set();
    }
    cout << "\nHere is your staff: " << endl;
    for (i = 0; i < SIZE; i ++)
    {
        lolas[i]->Show();
        cout << endl;
    }

    for (i = 0; i < SIZE; i ++)
    {
        delete lolas[i];
    }

    return 0;
}