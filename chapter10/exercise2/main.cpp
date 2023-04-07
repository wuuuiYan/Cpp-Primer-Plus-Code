#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
    Person one;
    Person two("Smythecarft");
    Person three("Dimwiddy", "Sam");

    cout << endl;
    one.Show();
    one.FormalShow();

    cout << endl;
    two.Show();
    two.FormalShow();

    cout << endl;
    three.Show();
    three.FormalShow();
}