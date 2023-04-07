#include <iostream>

using namespace std;

class A
{

};

class B : public A
{

};

class C
{

};

int main()
{
    A a;
    B b;
    A *pa = static_cast<A *>(&b);
    B *pb = static_cast<B *>(&a);
    //关键字static_cast向上、向下转换均可

    //C *pc = static_cast<C *>(&a); //无法对没有继承关系的类进行转换

    return 0;
}