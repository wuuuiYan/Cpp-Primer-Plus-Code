#include <iostream>
#include "stock20.h"
#include <cstring>

using namespace std;

Stock::Stock()
{
    company = NULL;
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const char *co, long n, double pr)
{
    company = new char[strlen(co) + 1];
    strcpy(company, co);
    if (n < 0)
    {
        shares = 0;
        std::cout << "Numbers of shares can't be negative ";
        std::cout << company << "$ shares set to be zero";
    }
    else
        shares = n;

    share_val = pr;
    set_tot();
}

Stock::~Stock()
{
    delete []company;
}

void Stock::buy(long num, double pr)
{
    if (num < 0)
    {
        std::cout << "Numbers of shares can't be negative, transaction is aborted." << std::endl;
    }
    else
    {
        shares += num;
        share_val = pr;
        set_tot();
    }    
}

void Stock::sell(long num, double pr)
{
    if (num < 0)
    {
        std::cout << "Numbers of shares can't be negative, transaction is aborted." << std::endl;
    }
    else if (num > shares)
    {
        std::cout << "You can't sell more than you have! Transcation is aborted." << std::endl;
    }
    else
    {
        shares -= num;
        share_val = pr;
        set_tot();
    }
}

void Stock::update(double pr)
{
    share_val = pr;
    set_tot();
}

const Stock & Stock::topval(const Stock &s) const
{
    if (s.total_val > total_val) //total_val = this->total.this
        return s;
    else
        return *this;
}

ostream &operator<<(ostream &os, const Stock &s)
{
    os << "Company: " << s.company << endl;
    os << "Shares: " << s.shares << endl;
    os << "Share price: " << s.share_val << endl;
    os << "Total worth: " << s.total_val << endl; 

    return os;
}