#include <iostream>
#include "worker.h"

using namespace std;

void Worker::Set()
{
    cout << "Enter worker's fullname: ";
    getline(cin, fullname);
    cout << "Enter worker's ID: ";
    cin >> id;
    while(cin.get() != '\n');
}

void Worker::Show() const
{
    cout << "Name: " << fullname << endl;
    cout << "Employee ID: " << id << endl;
}

void Waiter::Set()
{
    Worker::Set();
    cout << "Enter waiter's panache rating: ";
    cin >> panache;
    while(cin.get() != '\n');
}

void Waiter::Show() const
{
    Worker::Show();
    cout << "Panache rating: " << panache << endl;
}

const char *Singer::pv[] = {"other", "alto", "contralto", "soprano", "bass", "baritone", "tenor"};

void Singer::Set()
{
    Worker::Set();
    int i;
    for (i = 0; i < Vtypes; i ++)
    {
        cout << i << ": " << pv[i] << ' ';
        if (i % 4 == 3)
            cout << endl;
    }
    if (i % 4 != 0)
        cout << endl;
    
    cout << "Please enter a value >=0 and <" << Vtypes << endl;
    cin >> voice;

    while(cin.get() != '\n');
}

void Singer::Show() const
{
    Worker::Show();
    cout << "Voice range: " << pv[voice] << endl;
}