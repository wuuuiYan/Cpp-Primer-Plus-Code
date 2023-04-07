#include <iostream>

using namespace std;

unsigned int c_in_str(const char *str, char ch);

int main()
{
    char mmm[15] = "minimum";
    const char *wail = "ululate";
    //常量指针指向常量字符串，可避免警告。否则编译器会认为通过指针修改常量
    //或者使用强制类型转换：char * wail = (char *)"ululate";

    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wail, 'u');

    cout << ms << " m character in " << mmm << endl;
    cout << us << " u character in " << wail << endl;

    return 0;
}

unsigned int c_in_str(const char *str , char ch)
{
    unsigned int cnt = 0;

    while (*str)
    {
        if (*str == ch)
            cnt++;
        str++;
    }
    return cnt;
}