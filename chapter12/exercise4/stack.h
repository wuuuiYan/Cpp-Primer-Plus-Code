#ifndef __STACK_H__
#define __STACK_H__

typedef unsigned long Item;
//要想使栈应用于不同的数据类型，只需要修改这里即可

class Stack
{
    private:
        enum {MAX = 10}; //创建枚举符号常量
        //Item items[MAX];
        Item *pitems;
        int size;
        int top;
    public:
        Stack(int n = MAX);
        Stack(const Stack &st);
        ~Stack();
        bool isempty() const;
        bool isfull() const;
        bool push(Item &item);
        bool pop(Item &item);
        Stack &operator=(const Stack &st);
};

#endif