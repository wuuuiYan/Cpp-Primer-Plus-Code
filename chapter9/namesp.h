#include <string>

namespace pers
{
    struct Person
    {
        std::string fname;
        std::string lname;
    };

    void getPerson(Person &rp);
    void showPerson(const Person &rp);
    //��ʹ�����ƿռ��еĺ���ҲҪ��������
}

namespace debts
{
    using namespace pers; //�������ƿռ�pers���Ա�ʹ�����ж���Ľṹ���뺯��

    struct Debt
    {
        Person name; //�ṹ���Ƕ��
        double amount;
    };

    void getDebt(Debt &rd);
    void showDebt(const Debt &rd);
    double sumDebts(const Debt ar[], int n);
    //��û�н��б��룬���������Ͳ������ˣ�˵��ȷʵ�ܿ�����ͬһ���ļ����µ������ļ��еĶ�������ƿռ�
}