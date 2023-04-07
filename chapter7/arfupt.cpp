#include <iostream>

using namespace std;

const double *f1(const double *arr, int n);
const double *f2(const double *arr, int n);
const double *f3(const double *arr, int n);

int main()
{
    double av[3] = {1112.3, 1542.6, 2227.9};

    //part1：定义函数指针
    const double *(*p1)(const double *, int) = f1;
    auto p2 = f2;

    cout << "PRAT1: ---------" << endl;
    cout << "Address    Value" << endl;
    cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl; //(*p1)(av, 3) = f1(av, 3)
    cout << p2(av, 3) << ": " << *p2(av, 3) << endl;

    //part2：定义存放函数指针的数组
    const double *(*pa[3])(const double *, int) = {f1, f2, f3}; //函数名就是函数的地址
    auto pb = pa;

    cout << "PRAT2: ---------" << endl;
    cout << "Address    Value" << endl;
    for (int i = 0; i < 3; i ++)
        cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
    for (int i = 0; i < 3; i ++)
        cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;

    //part3：定义指向存放函数指针的数组的指针
    auto pc = &pa; //(*pc) = pa  --> (*pc)[0] = pa[0] 
    const double *(*(*pd)[3])(const double *, int) = &pa;
    cout << "PRAT3: ---------" << endl;
    cout << "Address    Value" << endl;
    cout << (*pc)[0](av, 3) << ": " << *((*pc)[0](av, 3)) << endl;
    const double *pdb = (*pd)[1](av, 3);
    cout << pdb << ": " << *pdb << endl;
    //通过函数指针调用函数的两种不同方式
    cout << (*pd)[2](av, 3) << ": " << *((*pd)[2](av, 3)) << endl; //直接通过函数指针名调用函数
    cout << (*(*pd)[2])(av, 3) << ": " << *((*(*pd)[2])(av, 3)) << endl; //先取函数指针中的内容再调用函数

    //优先级测试：方括号 > 圆括号 > 取内容运算符
    //pa[2] = f2, f2(av, 3) = (*f2)(av, 3)
    cout << "TEST: ---------" << endl;
    cout << (*pa[2])(av, 3) << endl;
    cout << pa[2](av, 3) << endl;
    cout << *pa[2](av, 3) << endl;

    return 0;
}

const double *f1(const double *arr, int n)
{
    //return &arr[0];
    return arr;
}

const double *f2(const double *arr, int n)
{
    //return &arr[1];
    return arr + 1;
}

const double *f3(const double *arr, int n)
{
    //return &arr[2];
    return arr + 2;
}