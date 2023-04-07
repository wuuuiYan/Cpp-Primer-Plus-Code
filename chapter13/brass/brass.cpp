#include "brass.h"
#include <iostream>

using namespace std;

Brass::Brass(const string &s, long an, double bal)
{
    fullName = s;
    acctNum = an;
    balance = bal;
}

void Brass::Deposit(double amt)
{
    if (amt < 0)
        cout << "Negative deposit is not allowed!" << endl;
    else
        balance += amt;
}

void Brass::Withdraw(double amt)
{
    if (amt < 0)
        cout << "Withdraw amount must be positive!" << endl;
    else if (amt <= balance)
        balance -= amt;
    else
        cout << "Withdraw amount exceeded your balance!" << endl;
}

double Brass::Balance() const
{
    return balance;
}

void Brass::ViewAcct() const
{
    cout << "Client: " << fullName << endl;
    cout << "Account number: " << acctNum << endl;
    cout << "Balance: $" << balance << endl;
}

BrassPlus::BrassPlus(const string &s, long an, double bal, double ml, double r) : Brass(s, an, bal)
{
    maxLoan  = ml;
    rate = r;
    owesBank = 0.0;
}

BrassPlus::BrassPlus(const Brass &ba, double ml, double r) : Brass(ba)
{
    maxLoan = ml;
    rate = r;
    owesBank = 0.0;
}

void BrassPlus::ViewAcct() const
{
    Brass::ViewAcct();
    cout << "Maximum load: $" << maxLoan << endl;
    cout << "Loan Rate: " << rate << endl;
    cout << "Owed to bank: $" << owesBank << endl;
}

void BrassPlus::Withdraw(double amt)
{
    double bal = Balance();
    if (amt <= bal)
        Brass::Withdraw(amt);
    else if(amt < bal + maxLoan - owesBank)
    {
        double advance = amt - bal; //透支金额
        owesBank = advance * (1 + rate);
        cout << "Bank Advance: $" << advance << endl;
        cout << "Finance Charge: $" << advance * rate << endl; //利息
        Deposit(advance); //透支金额加入账户才可以取
        Brass::Withdraw(amt);
    }
    else
        cout << "Credit limit exceeded!" << endl;
}