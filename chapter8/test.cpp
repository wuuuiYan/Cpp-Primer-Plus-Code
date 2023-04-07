#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    int c = a + b;

    int *pa = &a;
    int *pb = &b;
    //int *pc = &(a +  b); //报错，因为表达式整体是个右值，不能取地址

    int &c = a; //左值引用：左值在赋值符号的右边
    //int &d = 10; //与上一行同为左值引用，赋值符号的右边必须得是左值，这里10是右值，因此会报错
    //int &e = (a + b); //理由同上

    const int &d = 10;
    const int &e = (a + b);
    //使用const限定符定义为常量/临时变量的引用，只能通过引用读取数据，而不能修改数据

    int &&x = 10; //右值引用：右值在赋值符号的右边
    int &&y = (a + b);

    return 0;
}

/*
    左值和右值的简单理解是在赋值符号(=、+=、-=、*=)的左边或右边
*/