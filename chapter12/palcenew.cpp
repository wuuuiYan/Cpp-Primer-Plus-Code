#include <iostream>
#include <string>
#include <new>

using namespace std;

const int BUF = 512;

class JustTesting
{
    private:
        string words;
        int number;
    public:
        JustTesting(const string &s = "Just Testing", int n = 0)
        {
            words = s; number = n; cout << words << " constructed\n";
        }
        ~JustTesting(){cout << words << " destroyed\n";}
        void Show() const{cout << words << ", " << number << endl;}
};

int main()
{
    char *buffer = new char[BUF];
    JustTesting *pc1, *pc2;

    pc1 = new(buffer) JustTesting; 
    pc2 = new JustTesting("heap1", 20); //为对象分配内存空间、调用自定义构造函数

    cout << "buffer: " << (void *)buffer << endl;
    cout << "heap1: " << pc2 << endl; 

    cout << pc1 << ": ";
    pc1->Show(); //通过指针调用成员函数的方式
    cout << pc2 << ": ";
    pc2->Show();

    JustTesting *pc3, *pc4;
    pc3 = new(buffer + sizeof(JustTesting)) JustTesting("Bad Idea", 6);
    pc4 = new JustTesting("heap2", 10);

    cout << pc3 << ": ";
    pc3->Show(); //通过指针调用成员函数的方式
    cout << pc4 << ": ";
    pc4->Show();

    //delete只能用于指向常规new运算符分配的内存，但不能用于定位new运算符
    //使用new运算符创建的对象，只有显式调用delete时析构函数才会被调用
    delete pc4;
    delete pc2; 

    //定位new运算符并没有开辟内存空间，只是指向了已分配完毕的内存空间
    //delete []buffer;

    //上面的做法是有效的，但是只释放了内存空间，并没有调用析构函数
    //因此对于pc1和pc3需要显式地调用析构函数，这是为数不多的例子
    pc3->~JustTesting();
    pc1->~JustTesting();
    delete []buffer; //遵循先开辟后释放的原则

    return 0;
}