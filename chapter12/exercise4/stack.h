#ifndef __STACK_H__
#define __STACK_H__

typedef unsigned long Item;
//Ҫ��ʹջӦ���ڲ�ͬ���������ͣ�ֻ��Ҫ�޸����Ｔ��

class Stack
{
    private:
        enum {MAX = 10}; //����ö�ٷ��ų���
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