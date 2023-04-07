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
        void Show() const;
};

Num::Num()
{
    n = 0;
}

Num::Num(int m)
{
    n = m;
}

void Num::Show() const
{
    cout << "n = " << n << endl;
}

//用非成员函数重载运算符，不需要在形参列表后面写const了
Num operator+(const Num &m, const Num &l)
{
    Num temp;
    temp.n = m.n + l.n;
    //只能通过成员函数访问私有成员变量，非成员函数重载运算符是大多会遇到这个问题
    //解决办法就是把成员变量设置为public，但是这种做法并不推荐，引出友元函数的概念
    return temp;
}

int main()
{
    Num a(10);
    a.Show();

    Num b(20);
    b.Show();

    Num c;
    c = a + b;
    c.Show();

    return 0;
}