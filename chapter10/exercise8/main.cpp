#include <iostream>
#include "list.h"
#include <cctype>

using namespace std;

int main()
{
    Item num;
    List list;

    for (int i = 0; i < 5; i ++)
    {
        cout << "Please enter a number: ";
        cin >> num;
        list.add(num);
    }
    list.visit(visit_item);

    return 0;
}