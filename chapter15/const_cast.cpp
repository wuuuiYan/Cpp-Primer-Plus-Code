#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    cout << "a = " << a << endl;

    const int *p1 = &a;
    //*p1 = 20; //不允许通过指针修改其指向的变量的内容

    int *p2 = const_cast<int *>(p1);
    *p2 = 20;
    cout << "a = " << a << endl;

    return 0;
}