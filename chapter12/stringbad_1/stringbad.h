#ifndef __STRNGBAD_H__
#define __STRNGBAD_H__

#include <iostream>

using namespace std;

class StringBad
{
    private:
        char *str;
        int len;
        static int num_strings; //类的所有对象共享一个静态成员变量
    public:
        StringBad(const char *s);
        StringBad();
        StringBad(const StringBad &st); //重新声明复制构造函数
        ~StringBad();

        StringBad &operator=(const StringBad &st);
        friend ostream &operator<<(ostream &os, const StringBad &st);
};

#endif