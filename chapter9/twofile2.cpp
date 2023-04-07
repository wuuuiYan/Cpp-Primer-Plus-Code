#include <iostream>

using namespace std;

extern int tom; //不能再赋值，只是声明外部引用
static int dick = 10; //静态变量，但是内部链接性
int harry = 200; //具有外部链接性的全局变量

void remote_access()
{
    cout << "remote_access() reports the following addresses: " << endl;
    cout << "&tom = " << &tom << " ";
    cout << "&dick = " << &dick << " ";
    cout << "&harry = " << &harry << " ";
}