#include <iostream>

using namespace std;

const int LIM = 8;

template <typename T>
void Swap(T &a, T &b);

void show(int arr[], int n);

template <typename T>
void Swap(T a[], T b[], int n);

int main()
{
    int i = 10;
    int j = 20;

    cout << "i = " << i << ", j = " << j << "." << endl;
    Swap(i, j); //库函数中已有名为swap的函数
    cout << "After swap, now i = " << i << ", j = " << j << "." << endl;

    int d1[LIM] = {0, 7, 0, 4, 1, 7, 7, 6};
    int d2[LIM] = {0, 7, 2, 0, 1, 9, 6, 9};

    cout << "Original arrays: " << endl;
    show(d1, LIM);
    show(d2, LIM);
    Swap(d1, d2, LIM);
    cout << "Swapped arrays: " << endl;
    show(d1, LIM);
    show(d2, LIM);

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

//重载函数模板
template <typename T>
void Swap(T a[], T b[], int n)
{
    T temp;
    for (int i = 0; i < n; i ++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

void show(int arr[], int n)
{
    for (int i = 0; i < n; i ++)
        cout << arr[i] << " ";
    cout << endl;
}