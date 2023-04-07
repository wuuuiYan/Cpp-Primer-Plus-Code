#include "golf.h"

using namespace std;

Golf::Golf(const char *name, int hc)
{
    strcpy(fullname, name);
    handicap = hc;
}

Golf::Golf()
{
    int temp = 1;

    cout << "The full name is: ";
    cin.getline(fullname, Len);

    cout << "The handicap is: ";
    cin >> handicap;
    cin.get(); //消耗最后的回车 
}

void Golf::sethandicap(int hc)
{
    handicap = hc;
}

void Golf::showGolf() const
{
    cout << "The fullname is: " << fullname << endl;
    cout << "The handicap is: " << handicap << endl;
}