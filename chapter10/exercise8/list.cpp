#include "list.h"
#include <iostream>

List::List()
{
    top = 0;
}

bool List::isempty() const
{
    return top == 0;
}

bool List::isfull() const
{
    return top == MAX;
}

bool List::add(Item &item)
{
    if (top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}

//�β��Ǻ���ָ�룬ָ���β�ΪItem���á���������Ϊvoid�ĺ���
void List::visit(void (*f)(Item &))
{
    for (int i = 0; i < top; i ++)
        f(items[i]);
}

void visit_item(Item &item)
{
    std::cout << "Item = " << item << std::endl;
}