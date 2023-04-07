#include <iostream>
#include "stock10.h"

using namespace std;

int main()
{
    Stock stock1("NanoSmart", 12, 20.0); //隐式调用构造函数
    stock1.show();

    Stock stock2 = Stock("Boffo objects", 2, 2.0); //显式调用构造函数
    stock2.show();

    /*
    Stock stock1; //隐式调用用户定义的默认构造函数，不要使用圆括号
    stock1.show();
    */

    cout << "Assign stock1 to stock2: " << endl;
    stock2 = stock1; //类对象可以互相拷贝
    cout << "Listening stock1 and stock2: " << endl;
    stock1.show();
    stock2.show();

    cout << "Using a constructor to reset an object: " << endl;
    stock1 = Stock("Nifty", 10, 50.0); 
    //显式调用构造函数创建一个临时对象，然后再复制给stock1，但是初始化的效率更高
    cout << "Revised stock1: " << endl;
    stock1.show();

    return 0;
}
