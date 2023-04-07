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

//形参是函数指针，指向形参为Item引用、返回类型为void的函数
void List::visit(void (*f)(Item &))
{
    for (int i = 0; i < top; i ++)
        f(items[i]);
}

void visit_item(Item &item)
{
    std::cout << "Item = " << item << std::endl;
}