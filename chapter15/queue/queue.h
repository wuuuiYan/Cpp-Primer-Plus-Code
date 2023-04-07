#ifndef __QUEUE_H__
#define __QUEUE_H__

#include <iostream>

using namespace std;

template <class Item>
class Queue
{
    private:
        enum{Q_SIZE = 10};
        //struct Node{Item item; struct Node *next;}; //创建节点结构体
        class Node //嵌套类
        {
            public:
                Item item;
                Node *next;
                Node(const Item &t) : item(t), next(NULL) {}
        };
        Node *front;
        Node *rear;
        int items;
        const int qsize;
    public:
        Queue(int qs = Q_SIZE);
        ~Queue();
        bool isempty() const; //判断队列是否已满
        bool isfull() const; //判断队列是否为空
        int Queuecount() const; //求当前队列中节点的个数
        bool enQueue(const Item &item); //插入队列
        bool dQueue(Item &item); 
};

template <class Item>
Queue<Item>::Queue(int qs) : qsize(qs)
{
    front = rear = NULL;
    items = 0;
    //qsize = qs; //队列中最大可存放的节点数
    //用成员初始化列表为常量初始化
}

template <class Item>
Queue<Item>::~Queue()
{
    Node *temp; //用于临时保存头结点的信息

    while (front != NULL)
    {
        temp = front;
        front = front->next;
        delete temp;
    }
}

template <class Item>
bool Queue<Item>::isempty() const
{
    return items == 0;
}

template <class Item>
bool Queue<Item>::isfull() const
{
    return items == qsize;
}

template <class Item>
int Queue<Item>::Queuecount() const
{
    return items;
}

template <class Item>
bool Queue<Item>::enQueue(const Item &item)
{
    if (isfull())
        return false;
    
    Node *add = new Node(item); //会调用类的构造函数
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

template <class Item>
bool Queue<Item>::dQueue(Item &item)
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

#endif