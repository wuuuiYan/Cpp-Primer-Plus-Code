#ifndef __WORKER_H__
#define __WORKER_H__

#include <iostream>
#include <string>

using namespace std;

class Worker
{
    private:
        string fullname;
        long id;
    protected:
        virtual void Data() const;
        virtual void Get();
    public:
        Worker() : fullname("none one"), id(0) {}
        Worker(const string &s, long n) : fullname(s), id(n) {}
        virtual ~Worker() {}
        virtual void Set() = 0;
        virtual void Show() const = 0;//出现纯虚函数，该类不会进行实例化
};

class Waiter : virtual public Worker
{
    private:
        int panache;
    protected:
        virtual void Data() const;
        virtual void Get(); 
    public:
        Waiter() : Worker(), panache(0) {}
        Waiter(const string &s, long n, int p = 0) : Worker(s, n), panache(p) {}
        Waiter(const Worker &wk, int p = 0) : Worker(wk), panache(p) {}
        virtual void Set();
        virtual void Show() const;
};

class Singer : public virtual Worker
{
    protected:
        enum{other, alto, contralto, soprano, bass, baritone, tenor};
        enum{Vtypes = 7};
        virtual void Data() const;
        virtual void Get();
    private:
        static const char *pv[Vtypes];
        int voice;
    public:
        Singer() : Worker(), voice(other) {}
        Singer(const string &s, long n, int v = other) : Worker(s, n), voice(v) {}
        Singer(const Worker &wk, int v = other) : Worker(wk), voice(v) {}
        virtual void Set();
        virtual void Show() const;
};

class SingingWaiter : public Waiter, public Singer
{
    protected:
        virtual void Data() const {}
        virtual void Get() {}
    public:
        SingingWaiter() {}
        SingingWaiter(const string &s, long n, int p = 0, int v = other) : Worker(s, n), Waiter(s, n , p), Singer(s, n, v) {}
        SingingWaiter(const Worker &wk, long p = 0, int v = other) : Worker(wk), Waiter(wk, p), Singer(wk, v) {}
        virtual void Set();
        virtual void Show() const;
};

#endif