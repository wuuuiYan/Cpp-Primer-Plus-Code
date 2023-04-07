#include <iostream>

using namespace std;

template <typename T>
void Swap(T &a, T &b);

int main()
{
    int i = 10;
    int j = 20;

    cout << "i = " << i << ", j = " << j << "." << endl;
    Swap(i, j); //�⺯����������Ϊswap�ĺ���
    cout << "After swap, now i = " << i << ", j = " << j << "." << endl;

    double x = 24.6;
    double y = 81.7;

    cout << "x = " << x << ", y = " << y << "." << endl;
    Swap(x, y);
    cout << "After swap, now x = " << x << ", y = " << y << "." << endl;

    return 0;
}

template <typename T>
void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}