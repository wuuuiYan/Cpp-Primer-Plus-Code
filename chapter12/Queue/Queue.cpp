#include "Queue.h"
#include <cstdlib>

Queue::Queue(int qs) : qsize(qs)
{
    front = rear = NULL;
    items = 0;
    //qsize = qs; //队列中最大可存放的结点数
    //用成员初始化列表为常量初始化
}

Queue::~Queue()
{
    Node *temp; //用于临时保存头结点的信息

    while (front != NULL)
    {
        temp = front;
        front = front->next;
        delete temp;
    }
}

bool Queue::isempty() const
{
    return items == 0;
}

bool Queue::isfull() const
{
    return items == qsize;
}

int Queue::Queuecount() const
{
    return items;
}

bool Queue::enQueue(const Item &item)
{
    if (isfull())
        return false;
    
    Node *add = new Node;
    add->item = item;
    add->next = NULL;
    items++;

    if (front == NULL)
        front = add;
    else
        rear->next = add;
    
    rear = add;

    //delete add;
    return true;
}

bool Queue::dQueue(Item &item)
{
    if (front ==NULL)
        return false;

    item = front->item;
    items--;

    Node *temp = front;
    front = front->next;
    delete temp;

    if (items ==0)
        rear = NULL;

    return true;
}

void Customer::set(long when)
{
    arrive = when;
    processtime = rand() % 3 + 1;
}

