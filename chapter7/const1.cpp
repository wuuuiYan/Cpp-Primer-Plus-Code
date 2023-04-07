#include <iostream>

using namespace std;

int main()
{
    int n = 10;
    int m = 100;
    int *const pt = &n;

    cout << "1):n = " << n << endl;

    *pt = 20; //允许通过指针修改所指向对象的值
    cout << "2):n = " << n << endl;

    //pt = &m;
    cout << "*pt = " << *pt << endl;

    return 0;
}