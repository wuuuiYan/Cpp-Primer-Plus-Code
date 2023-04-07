#include "Queue.h"
#include <iostream>

using namespace std;

int main()
{
    int qs;
    Item temp;
    int i = 0;
    int customers = 0;

    cout << "Enter maximum size of queue: ";
    cin >> qs;

    Queue line(qs);
    //cout << "============" << endl;      

    while (!line.isfull())
    {
        temp.set(i++);
        line.enQueue(temp); 
        customers++;    
    }

    cout << "Customer: " << customers << endl;

    while (!line.isempty())
    {
        line.dQueue(temp);
        customers--;
    }
    cout << "Now customers: " << customers << endl;

    return 0;
}