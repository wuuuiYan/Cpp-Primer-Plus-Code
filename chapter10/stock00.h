#ifndef __STOCK00__H__
#define __STOCK00__H__

#include <string>

//��ͷ�ļ���ֻ����������������еĺ���Ҳֻ�������������嶨��
class Stock
{
    //˽�еģ������ڵ�ǰ���з��ʣ���ֹ�޸�����
    private:
        std::string company; //��˾����
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
        void acquire(const std::string &co, long n, double pr);
        void buy(long num, double pr);
        void sell(long num, double pr);
        void update(double pr);
        void show();

};//д��ͬ�ṹ��

#endif