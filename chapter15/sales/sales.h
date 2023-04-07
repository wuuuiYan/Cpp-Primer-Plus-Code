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
        explicit Sales(int yy = 0); //��ֹ��ʽ����ת��
        Sales(int yy, const double *gr, int n);
        virtual ~Sales() {} //��������������������麯��
        int Year() const {return year;}
        virtual double operator[](int i) const;
        virtual double &operator[](int i);

        class bad_index : public logic_error
        {
            private:
                int bi; //��һ��������������쳣
            public:
                explicit bad_index(int ix, const string &s = "Index error is Sales object\n") : logic_error(s), bi(ix) {}
                int bi_val() const {return bi;}
                virtual ~bad_index() throw() {} 
                //throw() ��ʾ���������쳣, throw() ��ʾ�������κ����͵��쳣
                //~bad_index() throw(char) ��ʾ������char���͵��쳣
        };
    //public �� private û�й̶���˳��
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
        //������Ĺ��캯���ȵ��û���Ĺ��캯����ɹ��в��ֵĳ�ʼ��
        LabeledSales(const string lb, int yy, const double *gr, int n) : Sales(yy, gr, n), label(lb) {}
        virtual ~LabeledSales() {}
        const string &Label() {return label;};
        virtual double operator[](int i) const;
        virtual double &operator[](int i);
        class nbad_index : public Sales::bad_index //�̳�Ƕ����
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