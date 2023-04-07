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
        //������Ĺ��캯��ֻ�ں�������ʱ���β��б�ĩβ���û���Ĺ��캯����������ʱ����Ҫ���෴��������Ĭ�ϲ���ֻ������ʱд������ʱ����Ҫ
        BrassPlus(const string &s = "Nullbody", long an = -1, double bal = 0.0, double ml = 500, double r = 0.11125);
        BrassPlus(const Brass &ba, double ml = 500, double rate = 0.11125);
        virtual void ViewAcct() const;
        virtual void Withdraw(double amt);
        void ResetMax(double m) {maxLoan = m;}
        void ResetRate(double r) {rate = r;}
        void ResetOwes() {owesBank = 0.0;}
};

#endif