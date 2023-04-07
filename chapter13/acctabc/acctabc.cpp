#include "acctabc.h"
#include <iostream>

using namespace std;

AcctABC::AcctABC(const string &s, long an, double bal)
{
    fullName = s;
    acctNum = an;
    balance = bal;
}

void AcctABC::Deposit(double amt)
{
    if (amt < 0)
        cout << "Negative deposit is not allowed!" << endl;
    else
        balance += amt;
}

//实现抽象基类的纯虚函数
void AcctABC::Withdraw(double amt)
{
    balance -= amt;
}

void Brass::Withdraw(double amt)
{
    if (amt < 0)
        cout << "Withdraw amount must be positive!" << endl;
    else if (amt <= Balance())
        AcctABC::Withdraw(amt);
    else
        cout << "Withdraw amount exceeded your balance!" << endl;
}

void Brass::ViewAcct() const
{
    //通过调用基类方法访问基类私有成员变量
    cout << "Client: " << FullName() << endl;
    cout << "Account number: " << AcctNum() << endl;
    cout << "Balance: $" << Balance() << endl;
}

BrassPlus::BrassPlus(const string &s, long an, double bal, double ml, double r) : AcctABC(s, an, bal)
{
    maxLoan  = ml;
    rate = r;
    owesBank = 0.0;
}

BrassPlus::BrassPlus(const AcctABC &ba, double ml, double r) : AcctABC(ba)
{
    maxLoan = ml;
    rate = r;
    owesBank = 0.0;
}

void BrassPlus::ViewAcct() const
{
    cout << "Client: " << FullName() << endl;
    cout << "Account number: " << AcctNum() << endl;
    cout << "Balance: $" << Balance() << endl;
    cout << "Maximum load: $" << maxLoan << endl;
    cout << "Loan Rate: " << rate << endl;
    cout << "Owed to bank: $" << owesBank << endl;
}

void BrassPlus::Withdraw(double amt)
{
    double bal = Balance();
    if (amt <= bal)
        AcctABC::Withdraw(amt);
    else if(amt < bal + maxLoan - owesBank)
    {
        double advance = amt - bal; //透支金额
        owesBank = advance * (1 + rate);
        cout << "Bank Advance: $" << advance << endl;
        cout << "Finance Charge: $" << advance * rate << endl; //利息
        Deposit(advance); //透支金额加入账户才可以取
        AcctABC::Withdraw(amt);
    }
    else
        cout << "Credit limit exceeded!" << endl;
}