#ifndef __BANKACCOUNT_H__
#define __BANKACCOUNT_H__

#include <string>
#include <iostream>

using namespace std;

class BankAccount
{
    private:
        string name;
        string accountnum;
        double balance;

    public:
        BankAccount(string client, string num, double bal = 0.0);

        void show() const;
        void deposit(double bal);
        void withdraw(double bal);
};

#endif