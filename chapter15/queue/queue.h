#ifndef __QUEUE_H__
#define __QUEUE_H__

#include <iostream>

using namespace std;

template <class Item>
class Queue
{
    private:
        enum{Q_SIZE = 10};
        //struct Node{Item item; struct Node *next;}; //�����ڵ�ṹ��
        class Node //Ƕ����
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
        bool isempty() const; //�ж϶����Ƿ�����
        bool isfull() const; //�ж϶����Ƿ�Ϊ��
        int Queuecount() const; //��ǰ�����нڵ�ĸ���
        bool enQueue(const Item &item); //�������
        bool dQueue(Item &item); 
};

template <class Item>
Queue<Item>::Queue(int qs) : qsize(qs)
{
    front = rear = NULL;
    items = 0;
    //qsize = qs; //���������ɴ�ŵĽڵ���
    //�ó�Ա��ʼ���б�Ϊ������ʼ��
}

template <class Item>
Queue<Item>::~Queue()
{
    Node *temp; //������ʱ����ͷ������Ϣ

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
    
    Node *add = new Node(item); //�������Ĺ��캯��
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