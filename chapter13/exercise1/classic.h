#ifndef __CLASSIC_H__
#define __CLASSIC_H__

#include <iostream>

using namespace std;

class Cd
{
    private:
        char performers[50];
        char label[20];
        int selections;
        double playtime;
    public:
        Cd(const char *s1, const char *s2, int n, double x); //构造函数不能是虚函数
        Cd(const Cd &d);
        Cd();
        virtual ~Cd() {} //基类的析构函数一定是虚函数
        virtual void Report() const;
        Cd &operator=(const Cd &d);
};

class Classic : public Cd
{
    private:
        char works[50];
    public:
        Classic();
        Classic(const Classic &c);
        Classic(const char *s1, const char *s2, char *s3, int n, double x);
        ~Classic() {}
        virtual void Report() const;
        Classic &operator=(const Classic &c);
};

#endif