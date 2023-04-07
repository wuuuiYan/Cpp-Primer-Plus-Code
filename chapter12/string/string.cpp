#include "string.h"
#include <iostream>
#include <cstring>

using namespace std;

int String::num_strings = 0;

int String::Howmany()
{
    return num_strings;  
}

String::String(const char *s)
{
    len = strlen(s);
    str = new char[len + 1]; //在实例化时才决定开辟多大的内存空间
    strcpy(str, s);
    num_strings++;
    //cout << num_strings << ": \"" << str << ".\"" << "\n"; 
}

String::String()
{
    len = 0;
    str = new char[1];
    str[0] = '\0';
    //str = 0;
    num_strings++;
    //cout << num_strings << ": \"" << str << ".\"" << "\n";
}

String::String(const String &st)
{
    len = st.len;
    str = new char[len + 1];
    strcpy(str, st.str);
    num_strings++;
    //cout << num_strings << ": \"" << str << ".\"" << "\n";
}

//当类的对象消失时(函数执行完毕或整个程序执行完毕)，析构函数会被自动调用
String::~String()
{
    //cout << "\"" << str << "\" object is deleted." << "\n";
    num_strings--;
    //cout << num_strings << " left." << "\n";
    delete []str; 
}

String &String::operator=(const String &st)
{
    if (this == &st)
        return *this; //当进行自我赋值时直接返回
    
    delete []str;
    len = st.len;
    str = new char[len + 1];
    strcpy(str, st.str);
    return *this; //this是指向对象的指针，所以要取内容
}

String &String::operator=(const char *st)
{
    delete []str;
    len = strlen(st);
    str = new char[len+ 1];
    strcpy(str, st);
    return *this; //this是指向对象的指针，所以要取内容
}

char &String::operator[](int i)
{
    return str[i]; //这里用到的是指针的索引
}

const char &String::operator[](int i) const
{
    return str[i];
}

bool operator<(const String &str1, const String &str2)
{
    return (strcmp(str1.str, str2.str) < 0);
}

bool operator>(const String &str1, const String &str2)
{
    return str2 > str1;
}

bool operator==(const String &str1, const String &str2)
{
    return (strcmp(str1.str, str2.str) == 0);
}

ostream &operator<<(ostream &os, const String &st)
{
    os << st.str;
    return os;
}

//重载输入运算符时必须要更改对象，因此不能加const
istream &operator>>(istream &is, String &st)
{
    char temp[String::SIZE];
    is.get(temp, String::SIZE);
    if (is)
        st = temp; //用到前面赋值运算符的重载
    while (is && is.get() != '\n')
        continue; 
    return is;
}