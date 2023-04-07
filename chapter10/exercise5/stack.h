#ifndef __STACK_H__
#define __STACK_H__

struct customer
{
    char fullname[35];
    double payment;
};

typedef customer Item;
//要想使栈应用于不同的数据类型，只需要修改这里即可

class Stack
{
    private:
        enum {MAX = 10}; //创建枚举符号常量
        Item items[MAX];
        int top;
    public:
        Stack();
        bool isempty() const;
        bool isfull() const;
        bool push(Item &item);
        bool pop(Item &item);
};

#endif