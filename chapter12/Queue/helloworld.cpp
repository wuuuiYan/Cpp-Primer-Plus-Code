#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!-1" << endl;
    cout << "Hello World!-2" << endl;
    cout << "Hello World!-3" << endl;
    int a = 100;

    for (int i = 0; i < 105; i++) a++;

    cout << a << endl;

    //system("pause");  // 暂停，防止调试运行时，运行完后直接闪退看不到结果
    return 0;
}