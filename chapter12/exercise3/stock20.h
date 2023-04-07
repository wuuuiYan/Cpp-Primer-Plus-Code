#ifndef __STOCK00__H__
#define __STOCK00__H__

#include <string>

using namespace std;

//在头文件中只进行类的声明，其中的函数也只做声明，不具体定义
class Stock
{
    //私有的，仅可在当前类中访问，防止修改数据
    private:
        char *company; //公司名称
        long shares; //数量
        double share_val; //单价
        double total_val; //总价
        void set_tot()
        {
            total_val = shares * share_val; 
            //即使函数体只有一行也需要加大花括号
        }

    // 公有的，可以通过public方法间接访问private变量
    public:
        Stock();
        //Stock(const std::string &co = "Error", long n = 0, double pr = 0.0);
        //只有在声明的时候使用默认参数，在定义时和常规函数没有区别
        Stock(const char *co, long n, double pr);
        //Stock(const Stock &s);
        ~Stock();

        void buy(long num, double pr);
        void sell(long num, double pr);
        void update(double pr);
        //void show() const;
        const Stock &topval(const Stock &s) const;
        friend ostream &operator<<(ostream &os, const Stock &s);

};//后面需要加分号，写法同结构体

#endif