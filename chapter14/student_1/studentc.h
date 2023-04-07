#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <iostream>
#include <string>
#include <valarray>

using namespace std;

class Student: private string, private valarray<double>
{
    private :
        typedef valarray<double> ArrayDb;
        //string name;
        //ArrayDb scores;
        ostream &arr_out(ostream &os) const;
    public:
        Student() : string("Null student"), ArrayDb() {}
        explicit Student(const string &s) : string(s), ArrayDb() {}
        explicit Student(int n) : string("Null student"), ArrayDb(n) {}
        Student(const string &s, int n) : string(s), ArrayDb(n) {}
        Student(const string &s, const ArrayDb &a) : string(s), ArrayDb(a) {}
        Student(const string &s, const double *pd, int n) : string(s), ArrayDb(pd, n) {}
        ~Student() {}
        double Average() const;
        const string &Name() const;
        double &operator[](int n); //�޸ģ�stu[0] = 100������ֵ����������ֵ
        double operator[](int n) const; //���ʣ� a = stu[0]������ֵֻ��������ֵ

        friend istream &operator>>(istream &is, Student &stu);
        friend istream &getline(istream &is, Student &stu);
        friend ostream &operator<<(ostream &os, const Student &stu);
};

#endif