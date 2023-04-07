#include <iostream>

using namespace std;

template <typename T>
T lesser(T a, T b)
{
    return a < b ? a : b;
}

int lesser(int a, int b)
{
    a = a < 0 ? (-a) : a;
    b = b < 0 ? (-b) : b;

    return a < b ? a : b;
}

int main()
{
    int m = 20;
    int n = -30;

    double x = 15.5;
    double y = 25.9;

    cout << lesser(m, n) << endl; //非模板函数优于模板函数
    cout << lesser(x, y) << endl; //非模板函数无法匹配，只能使用模板函数

    cout << lesser<>(m, n) << endl; //指定使用模板函数，因此不适用非模板函数
    cout << lesser<int>(x, y) << endl; //将模板函数显示实例化为int类型，因此需要将实参进行类型转换，最后的返回值也是int类型

    return 0;
}