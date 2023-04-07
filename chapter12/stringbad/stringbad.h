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
        ~StringBad();
        friend ostream &operator<<(ostream &os, const StringBad &st);
};

#endif