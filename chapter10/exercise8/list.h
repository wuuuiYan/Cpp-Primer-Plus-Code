#ifndef __LIST_H__
#define __LIST_H__

typedef unsigned long Item;
//要想使栈应用于不同的数据类型，只需要修改这里即可

void visit_item(Item &item);

class List
{
    private:
        enum {MAX = 10}; //创建枚举符号常量
        Item items[MAX];
        int top;
    public:
        List();
        bool isempty() const;
        bool isfull() const;
        bool add(Item &item);
        bool pop(Item &item);
        void visit(void (*pf)(Item &));
};

#endif