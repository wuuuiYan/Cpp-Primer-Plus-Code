#include <iostream>
#include <cstring>
#include "golf.h"

using namespace std;

int main()
{
    Golf p1("Rick", 100);
    Golf p2; //����Ĭ�Ϲ��캯��

    cout << endl;
    cout << "Now show two person: " << endl;
    p1.showGolf();
    p2.showGolf();

    return 0;
}