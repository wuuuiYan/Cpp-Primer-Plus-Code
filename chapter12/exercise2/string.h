#ifndef __STRING_H__
#define __STRING_H__

#include <iostream>

using namespace std;

class String
{
    private:
        char *str;
        int len;
        static int num_strings; //类的所有对象共享一个静态成员变量
        static const int SIZE = 80; //存放在静态存储区，不属于任何一个对象
    public:
        String(const char *s);
        String();
        String(const String &st); //重新声明复制构造函数
        ~String();

        int length() const {return len;}

        String &operator=(const String &st);
        String &operator=(const char *st);
        char &operator[](int i);
        const char &operator[](int i) const;

        friend bool operator<(const String &str1, const String &str2);
        friend bool operator>(const String &str1, const String &str2);
        friend bool operator==(const String &str1, const String &str2);
        friend ostream &operator<<(ostream &os, const String &st);
        friend istream &operator>>(istream &is, String &st);

        //静态成员函数不属于任何一个对象，因此不能通过某一个对象调用
        //需要通过类名+作用域解析运算符调用，函数中同样返回的是静态成员变量
        static int Howmany();

        friend String operator+(const char *s, const String &st);
        String operator+(const String &st) const;
        void stringlow();
        void stringup();
        int has(char ch) const;
};

#endif