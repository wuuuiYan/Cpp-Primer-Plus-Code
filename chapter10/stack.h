#ifndef __STACK_H__
#define __STACK_H__

typedef unsigned long Item;
//Ҫ��ʹջӦ���ڲ�ͬ���������ͣ�ֻ��Ҫ�޸����Ｔ��

class Stack
{
    private:
        enum {MAX = 10}; //����ö�ٷ��ų���
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