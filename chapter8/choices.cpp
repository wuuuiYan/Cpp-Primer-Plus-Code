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

    cout << lesser(m, n) << endl; //��ģ�庯������ģ�庯��
    cout << lesser(x, y) << endl; //��ģ�庯���޷�ƥ�䣬ֻ��ʹ��ģ�庯��

    cout << lesser<>(m, n) << endl; //ָ��ʹ��ģ�庯������˲����÷�ģ�庯��
    cout << lesser<int>(x, y) << endl; //��ģ�庯����ʾʵ����Ϊint���ͣ������Ҫ��ʵ�ν�������ת�������ķ���ֵҲ��int����

    return 0;
}