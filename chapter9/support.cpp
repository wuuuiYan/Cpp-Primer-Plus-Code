#include "support.h"

using namespace std;

void update(double dt)
{
    warming += dt;
    cout << "Updating global warming to " << warming << " degrees." << endl;
}

void local()
{
    double warming = 0.8; //变量作用域的就近原则

    cout << "Local warming = " << warming << " degrees." << endl;
    cout << "But global warming = " << ::warming << " degrees." << endl;
    //使用作用域解析运算符::
}