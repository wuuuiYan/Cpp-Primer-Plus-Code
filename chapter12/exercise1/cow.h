#ifndef __COW_H__
#define __COW_H__

#include <iostream>

using namespace std;

class Cow 
{
    private:
        char name[20];
        char *hobby; //ֻ�Ƕ��������ָ�룬��û��Ϊ�俪���ڴ�ռ�
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