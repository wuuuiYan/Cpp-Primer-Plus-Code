#include "queue.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Queue<string> cs(5);
    string temp;
    while(!cs.isfull())
    {
        cout << "Please enter client's name, then push to queue: " << endl;
        getline(cin, temp);
        cs.enQueue(temp);
    }

    cout << "The queue is full, processing begin!" << endl;

    while(!cs.isempty())
    {
        cs.dQueue(temp);
        cout << "Now processing: " << temp << endl;
    }

    return 0;
}