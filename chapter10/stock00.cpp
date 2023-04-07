#include <iostream>
#include "stock00.h"

void Stock::acquire(const std::string &co, long n, double pr)
{
    company = co; //类的成员函数可以访问private成员变量
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

void Stock::show()
{
    std::cout << "Company: " << company << std::endl;
    std::cout << "Shares: " << shares << std::endl;
    std::cout << "share_val: " << share_val << std::endl;
    std::cout << "total_val: " << total_val << std::endl;
}