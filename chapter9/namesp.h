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
    //即使是名称空间中的函数也要进行声明
}

namespace debts
{
    using namespace pers; //引入名称空间pers，以便使用其中定义的结构体与函数

    struct Debt
    {
        Person name; //结构体的嵌套
        double amount;
    };

    void getDebt(Debt &rd);
    void showDebt(const Debt &rd);
    double sumDebts(const Debt ar[], int n);
    //还没有进行编译，上述函数就不报错了，说明确实能看到在同一个文件夹下的其他文件中的定义的名称空间
}