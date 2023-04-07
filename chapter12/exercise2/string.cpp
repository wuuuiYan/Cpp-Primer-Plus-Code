#include "string.h"
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int String::num_strings = 0;

int String::Howmany()
{
    return num_strings;  
}

String::String(const char *s)
{
    len = strlen(s);
    str = new char[len + 1]; //��ʵ����ʱ�ž������ٶ����ڴ�ռ�
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

//����Ķ�����ʧʱ(����ִ����ϻ���������ִ�����)�����������ᱻ�Զ�����
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
        return *this; //���������Ҹ�ֵʱֱ�ӷ���
    
    delete []str;
    len = st.len;
    str = new char[len + 1];
    strcpy(str, st.str);
    return *this; //this��ָ������ָ�룬����Ҫȡ����
}

String &String::operator=(const char *st)
{
    delete []str;
    len = strlen(st);
    str = new char[len+ 1];
    strcpy(str, st);
    return *this; //this��ָ������ָ�룬����Ҫȡ����
}

char &String::operator[](int i)
{
    return str[i]; //�����õ�����ָ�������
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

//�������������ʱ����Ҫ���Ķ�����˲��ܼ�const
istream &operator>>(istream &is, String &st)
{
    char temp[String::SIZE];
    is.get(temp, String::SIZE);
    if (is)
        st = temp; //�õ�ǰ�渳ֵ�����������
    while (is && is.get() != '\n')
        continue; 
    return is;
}

String operator+(const char *s, const String &st)
{
    String temp;

    temp.len = strlen(s) + st.len;
    temp.str = new char[temp.len + 1];
    strcpy(temp.str, s);
    strcat(temp.str, st.str); //�ַ���׷�Ӻ���

    return temp;
}

String String::operator+(const String &st) const
{
    String temp;

    temp.len = len + st.len;
    temp.str = new char[temp.len + 1];
    strcpy(temp.str, str);
    strcat(temp.str, st.str);

    return temp;
}

void String::stringlow()
{
    for (int i = 0; i < len; i ++)
        str[i] = tolower(str[i]);
}

void String::stringup()
{
    for (int i = 0; i < len; i ++)
        str[i] = toupper(str[i]);
}

int String::has(char ch) const
{
    int cnt = 0;
    for (int i = 0; i < len; i ++)
        if (str[i] == ch)
            cnt++;

    return cnt;
}