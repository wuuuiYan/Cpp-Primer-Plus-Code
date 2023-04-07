#ifndef __SALES_H__
#define __SALES_H__

#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

class Sales
{
    public:
        enum{MONTHS = 12};
        explicit Sales(int yy = 0); //防止隐式类型转换
        Sales(int yy, const double *gr, int n);
        virtual ~Sales() {} //基类的析构函数必须是虚函数
        int Year() const {return year;}
        virtual double operator[](int i) const;
        virtual double &operator[](int i);

        class bad_index : public logic_error
        {
            private:
                int bi; //哪一个索引编号引发异常
            public:
                explicit bad_index(int ix, const string &s = "Index error is Sales object\n") : logic_error(s), bi(ix) {}
                int bi_val() const {return bi;}
                virtual ~bad_index() throw() {} 
                //throw() 表示不会引发异常, throw() 表示会引发任何类型的异常
                //~bad_index() throw(char) 表示会引发char类型的异常
        };
    //public 与 private 没有固定的顺序
    private:
        int year;
        double gross[MONTHS];       
};

class LabeledSales : public Sales
{
    private:
        string label;
    public:
        explicit LabeledSales(const string &lb = "none", int yy = 0) : Sales(yy), label(lb) {}
        //派生类的构造函数先调用基类的构造函数完成共有部分的初始化
        LabeledSales(const string lb, int yy, const double *gr, int n) : Sales(yy, gr, n), label(lb) {}
        virtual ~LabeledSales() {}
        const string &Label() {return label;};
        virtual double operator[](int i) const;
        virtual double &operator[](int i);
        class nbad_index : public Sales::bad_index //继承嵌套类
        {
            private:
                string lbl;
            public:
                nbad_index(const string &lb, int ix, const string &s = "Index error in LabeledSales object\n") : Sales::bad_index(ix, s), lbl(lb) {}
                const string &label_val() const {return lbl;}
                virtual ~nbad_index() throw() {}
        };
};

#endif