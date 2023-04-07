#include "stringbad.h"
#include <iostream>
#include <cstring>

using namespace std;

int StringBad::num_strings = 0;

//���ø�ʽ��StringBad str("Hello World")
StringBad::StringBad(const char *s)
{
    len = strlen(s);
    str = new char[len + 1]; //��ʵ����ʱ�ž������ٶ����ڴ�ռ�
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

//����Ķ�����ʧʱ(����ִ����ϻ���������ִ�����)�����������ᱻ�Զ�����
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