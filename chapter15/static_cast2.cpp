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
    //�ؼ���static_cast���ϡ�����ת������

    //C *pc = static_cast<C *>(&a); //�޷���û�м̳й�ϵ�������ת��

    return 0;
}