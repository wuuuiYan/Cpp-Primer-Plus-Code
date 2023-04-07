#include <iostream>
#include <string>

using namespace std;

int main()
{
    string empty;
    string small = "bit";
    string large = "Elephants are a girl's best friend";

    cout << "Size: " << endl;
    cout << "\t empty: " << empty.size() << endl;
    cout << "\t small: " << small.size() << endl;
    cout << "\t large: " << large.size() << endl;

    cout << "Capacities: " << endl;
    cout << "\t empty: " << empty.capacity() << endl;
    cout << "\t small: " << small.capacity() << endl;
    cout << "\t large: " << large.capacity() << endl;

    empty.reserve(50);
    cout << "Capacity after empty.reserve(50): " << empty.capacity() << endl;

    return 0;
}