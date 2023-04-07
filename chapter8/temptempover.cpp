#include <iostream>

using namespace std;

struct debts
{
    char name[10];
    double amount;
};

template <typename T>
void ShowArray(T arr[], int n);

template <typename T>
void ShowArray(T *arr[], int n);

int main()
{
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] =
        {
            {"Rick", 2400.0},
            {"Jack", 1300.0},
            {"Rose", 1800.0}
        };

    double *pd[3]; //存放指针的数组

    for (int i = 0; i < 3; i ++)
        pd[i] = &mr_E[i].amount;

    ShowArray(things, 6);

    ShowArray(pd, 3);

    return 0;
}

template <typename T>
void ShowArray(T arr[], int n)
{
    cout << "template A: " << endl;

    for (int i = 0; i < n; i ++)
        cout << arr[i] << " ";
    cout << endl;
}

//记得在前面进行函数原型声明，否则不会进行匹配
template <typename T>
void ShowArray(T *arr[], int n)
{
    cout << "template B: " << endl;

    for (int i = 0; i < n; i ++)
        cout << *arr[i] << " ";
    cout << endl;
}