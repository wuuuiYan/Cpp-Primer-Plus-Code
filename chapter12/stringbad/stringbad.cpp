#include "stringbad.h"
#include <iostream>
#include <cstring>

using namespace std;

int StringBad::num_strings = 0;

//调用格式：StringBad str("Hello World")
StringBad::StringBad(const char *s)
{
    len = strlen(s);
    str = new char[len + 1]; //在实例化时才决定开辟多大的内存空间
    strcpy(str, s);
    num_strings++;
    cout << num_strings << ": \"" << str << ".\"" << "\n"; 
}

StringBad::StringBad()
{
    len = 4;
    str = new char[4];
    strcpy(str, "C++");
    num_strings++;
    cout << num_strings << ": \"" << str << ".\"" << "\n";
}

//当类的对象消失时(函数执行完毕或整个程序执行完毕)，析构函数会被自动调用
StringBad::~StringBad()
{
    cout << "\"" << str << "\" object is deleted." << "\n";
    num_strings--;
    cout << num_strings << " left." << "\n";
    delete []str; 
}

ostream &operator<<(ostream &os, const StringBad &st)
{
    os << st.str;
    return os;
}