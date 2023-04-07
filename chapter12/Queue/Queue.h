#ifndef __QUEUE_H__
#define __QUEUE_H__

#include <iostream>

using namespace std;

class Customer
{
    private:
        long arrive; //到达时间
        int processtime; //操作时间
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
        struct Node{Item item; struct Node *next;}; //创建结点结构体
        Node *front;
        Node *rear;
        int items;
        const int qsize;
    public:
        Queue(int qs = Q_SIZE);
        ~Queue();
        bool isempty() const; //判断队列是否已满
        bool isfull() const; //判断队列是否为空
        int Queuecount() const; //求当前队列中结点的个数
        bool enQueue(const Item &item); //插入队列
        bool dQueue(Item &item); 
};

#endif