#ifndef __LIST_H__
#define __LIST_H__

typedef unsigned long Item;
//Ҫ��ʹջӦ���ڲ�ͬ���������ͣ�ֻ��Ҫ�޸����Ｔ��

void visit_item(Item &item);

class List
{
    private:
        enum {MAX = 10}; //����ö�ٷ��ų���
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