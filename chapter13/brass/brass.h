#ifndef __BRASS_H__
#define __BRASS_H__

#include <iostream>
#include <string>

using namespace std;

class Brass
{
    private:
        string fullName;
        long acctNum;
        double balance;
    public:
        Brass(const string &s = "Bullbody", long an = -1, double bal = 0.0);
        void Deposit(double amt);
        virtual void Withdraw(double amt);
        double Balance() const;
        virtual void ViewAcct() const;
        virtual ~Brass(){}
};

class BrassPlus : public Brass
{
    private:
        double maxLoan;
        double rate;
        double owesBank;
    public:
        //派生类的构造函数只在函数定义时在形参列表末尾调用基类的构造函数，而声明时不需要；相反，函数的默认参数只在声明时写，定义时则不需要
        BrassPlus(const string &s = "Nullbody", long an = -1, double bal = 0.0, double ml = 500, double r = 0.11125);
        BrassPlus(const Brass &ba, double ml = 500, double rate = 0.11125);
        virtual void ViewAcct() const;
        virtual void Withdraw(double amt);
        void ResetMax(double m) {maxLoan = m;}
        void ResetRate(double r) {rate = r;}
        void ResetOwes() {owesBank = 0.0;}
};

#endif