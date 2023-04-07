#ifndef __STRING_H__
#define __STRING_H__

#include <iostream>

using namespace std;

class String
{
    private:
        char *str;
        int len;
        static int num_strings; //������ж�����һ����̬��Ա����
        static const int SIZE = 80; //����ھ�̬�洢�����������κ�һ������
    public:
        String(const char *s);
        String();
        String(const String &st); //�����������ƹ��캯��
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

        //��̬��Ա�����������κ�һ��������˲���ͨ��ĳһ���������
        //��Ҫͨ������+�����������������ã�������ͬ�����ص��Ǿ�̬��Ա����
        static int Howmany();

        friend String operator+(const char *s, const String &st);
        String operator+(const String &st) const;
        void stringlow();
        void stringup();
        int has(char ch) const;
};

#endif