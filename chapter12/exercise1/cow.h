#ifndef __COW_H__
#define __COW_H__

#include <iostream>

using namespace std;

class Cow 
{
    private:
        char name[20];
        char *hobby; //只是定义了这个指针，并没有为其开辟内存空间
        double weight;

    public:
        Cow();
        Cow(const char *nm, const char *ho, double wt);
        Cow(const Cow &c);
        ~Cow();
        Cow & operator=(const Cow &c);
        void ShowCow() const;

};

#endif