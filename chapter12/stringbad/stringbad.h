#ifndef __STRNGBAD_H__
#define __STRNGBAD_H__

#include <iostream>

using namespace std;

class StringBad
{
    private:
        char *str;
        int len;
        static int num_strings; //������ж�����һ����̬��Ա����
    public:
        StringBad(const char *s);
        StringBad();
        ~StringBad();
        friend ostream &operator<<(ostream &os, const StringBad &st);
};

#endif