#include <iostream>

using namespace std;

void oil(int x);

int main()
{
    int texas = 31;
    int year = 2011;

    cout << "In main(), texas = " << texas << " ";
    cout << "address = " << &texas << endl;
    cout << "In main(), texas = " << year << " ";
    cout << "address = " << &year << endl;

    oil(texas);

    cout << "In main(), texas = " << texas << " ";
    cout << "address = " << &texas << endl;
    cout << "In main(), texas = " << year << " ";
    cout << "address = " << &year << endl;

    return 0;
}

void oil(int x)
{
    int texas = 5;

    cout << "In oil(), texas = " << texas << " ";
    cout << "address = " << &texas << endl;
    cout << "In oil(), x = " << x << " ";
    cout << "address = " << &x << endl;

    {//´úÂë¿é
        int texas = 113;
        cout << "In block, texas = " << texas << " ";
        cout << "address = " << &texas << endl;
        cout << "In block, x = " << x << " ";
        cout << "address = " << &x << endl;
    }

    cout << "Post-block, texas = " << texas << " ";
    cout << "address = " << &texas << endl;
}