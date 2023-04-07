#include <iostream>

using namespace std;

class Num
{
    public:
        int n;
    public:
        Num();
        Num(int m);
        //Num operator+(const Num &t) const;
        //void Show() const;
        void operator=(int l);
};

Num::Num()
{
    n = 0;
    cout << "Hello world!" << endl;
    //添加输出语句的作用是为了显式地证明该函数被调用了，下同 
}

Num::Num(int m)
{
    n = m;
    cout << "Good morning!" << endl;
}

void Num::operator=(int l)
{
    n = l;
    cout << "I love you, Rick!" << endl;
}

int main()
{
    Num a;
    a = 10; //调用了用户自定义的构造函数，等价于：a(10)
    //当类中没有对赋值运算符进行重载时，程序会把右侧变量当做构造函数的形参
    //因此不能用非成员函数对赋值运算符重载，这样会与构造函数形成冲突，编译器会报错
    //当类中有成员函数对赋值运算符进行重载时，程序会优先调用重载的运算符

    return 0;
}