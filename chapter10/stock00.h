#ifndef __STOCK00__H__
#define __STOCK00__H__

#include <string>

//在头文件中只进行类的声明，其中的函数也只做声明，不具体定义
class Stock
{
    //私有的，仅可在当前类中访问，防止修改数据
    private:
        std::string company; //公司名称
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
        void acquire(const std::string &co, long n, double pr);
        void buy(long num, double pr);
        void sell(long num, double pr);
        void update(double pr);
        void show();

};//写法同结构体

#endif