#ifndef __ARRAYTP_H__
#define __ARRAYTP_H__

#include <iostream>

using namespace std;

template<class T, int n>
class ArrayTP
{
    private:
        T ar[n];
    public:
        T &operator[](int i);
        T operator[](int i) const;
};

template<class T, int n>
T &ArrayTP<T, n>::operator[](int i)
{
    return ar[i];
}

template<class T, int n>
T ArrayTP<T, n>::operator[](int i) const
{
    return ar[i];
}

#endif