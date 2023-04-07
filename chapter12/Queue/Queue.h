#ifndef __QUEUE_H__
#define __QUEUE_H__

#include <iostream>

using namespace std;

class Customer
{
    private:
        long arrive; //����ʱ��
        int processtime; //����ʱ��
    public:
        Customer(){arrive = processtime = 0;}
        void set(long when);
        long when() const{return arrive;}
        int ptime() const{return processtime;}
};

typedef Customer Item; 

class Queue
{
    private:
        enum{Q_SIZE = 10};
        struct Node{Item item; struct Node *next;}; //�������ṹ��
        Node *front;
        Node *rear;
        int items;
        const int qsize;
    public:
        Queue(int qs = Q_SIZE);
        ~Queue();
        bool isempty() const; //�ж϶����Ƿ�����
        bool isfull() const; //�ж϶����Ƿ�Ϊ��
        int Queuecount() const; //��ǰ�����н��ĸ���
        bool enQueue(const Item &item); //�������
        bool dQueue(Item &item); 
};

#endif