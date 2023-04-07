#include <iostream>
#include <cstring>
#include "golf.h"

using namespace std;

int main()
{
    Golf p1("Rick", 100);
    Golf p2; //调用默认构造函数

    cout << endl;
    cout << "Now show two person: " << endl;
    p1.showGolf();
    p2.showGolf();

    return 0;
}