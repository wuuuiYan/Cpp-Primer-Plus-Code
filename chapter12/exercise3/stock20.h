#ifndef __STOCK00__H__
#define __STOCK00__H__

#include <string>

using namespace std;

//��ͷ�ļ���ֻ����������������еĺ���Ҳֻ�������������嶨��
class Stock
{
    //˽�еģ������ڵ�ǰ���з��ʣ���ֹ�޸�����
    private:
        char *company; //��˾����
        long shares; //����
        double share_val; //����
        double total_val; //�ܼ�
        void set_tot()
        {
            total_val = shares * share_val; 
            //��ʹ������ֻ��һ��Ҳ��Ҫ�Ӵ�����
        }

    // ���еģ�����ͨ��public������ӷ���private����
    public:
        Stock();
        //Stock(const std::string &co = "Error", long n = 0, double pr = 0.0);
        //ֻ����������ʱ��ʹ��Ĭ�ϲ������ڶ���ʱ�ͳ��溯��û������
        Stock(const char *co, long n, double pr);
        //Stock(const Stock &s);
        ~Stock();

        void buy(long num, double pr);
        void sell(long num, double pr);
        void update(double pr);
        //void show() const;
        const Stock &topval(const Stock &s) const;
        friend ostream &operator<<(ostream &os, const Stock &s);

};//������Ҫ�ӷֺţ�д��ͬ�ṹ��

#endif