#include <iostream>
#include "stack.h"

using namespace std;

template<template<class T> class Thing>
class Crab
{
    private:
        //ʹ����ģ�崴��������Ķ���
        Thing<int> s1;
        Thing<double> s2;
    public:
        bool push(int a, double x) {return s1.push(a) && s2.push(x);}
        bool pop(int &a, double &x) {return s1.pop(a) && s2.pop(x);}
};

int main()
{
    int ni;
    double nb;

    Crab<Stack> nebula; //��ģ������Ϊ���Ͳ���������
    cout << "Enter int & double pairs, such as 2 3.4(0 0 ro end)" << endl;
    while ((cin >> ni >> nb) && (ni > 0 && nb > 0))
    {
        if (!nebula.push(ni, nb))
        {
            break;
        }
    }
    while (nebula.pop(ni, nb))
        cout << ni << ' ' << nb << endl;

    return 0;
}