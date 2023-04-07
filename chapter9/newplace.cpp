#include <iostream>
#include <new>

using namespace std;

const int N = 5;
const int BUF = 512;

char buffer[BUF] = "Hello! World";

int main()
{
    double *pd1, *pd2;
    int i;

    cout << "Calling new and placement new: " << endl;
    pd1 = new double[N];//常规用法
    pd2 = new (buffer) double[N];//这里pd2指向了buffer的原位置，以后通过操作指针pd2就可以修改buffer地址处的值

    for (i = 0; i < N; i ++)
        pd2[i] = pd1[i] = 1000 + 20.0 * i;

    cout << "pd1 = " << pd1 << ", buffer = " << (void *)buffer << endl;
    //在这里虽然数组名就代表数组的地址，但是字符数组如果不做强制类型转换，cout智能对象就会根据该地址输出后面的字符串
    //cout << "1" << endl;

    for (i = 0; i < N; i ++)
    {
        cout << pd1[i] << " at " << &pd1[i] << "; ";
        cout << pd2[i] << " at " << &pd2[i] << endl;
    }

    cout << "\nCalling new and placement new a second time: " << endl;
    double *pd3, *pd4;
    pd3 = new double[N];
    pd4 = new (buffer) double[N];
    for (i = 0; i < N; i ++)
        pd4[i] = pd3[i] = 1000 + 40.0 * i;
    
    for (i = 0; i < N; i ++)
    {
        cout << pd3[i] << " at " << &pd3[i] << "; ";
        cout << pd4[i] << " at " << &pd4[i] << endl;
    }

    cout << "\nCalling new and placement new a third time: " << endl;
    delete[] pd1;
    pd1 = new double[N];
    pd2 = new (buffer + N * sizeof(double)) double[N]; //用地址偏移产生定位

    for (i = 0; i < N; i ++)
        pd2[i] = pd1[i] = 1000 + 20.0 * i;

    for (i = 0; i < N; i ++)
    {
        cout << pd1[i] << " at " << &pd1[i] << "; ";
        cout << pd2[i] << " at " << &pd2[i] << endl;
    }

    delete[] pd1;
    delete[] pd3;
    //delete只能用于常规new运算符开辟的内存空间，而不能用于定位new运算符
    //因为delete只能用于删除动态内存空间(在堆heap中)，而buffer是静态内存(全局变量)

    return 0;
}