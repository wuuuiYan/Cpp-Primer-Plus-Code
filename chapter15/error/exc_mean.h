#ifndef __EXC_MEAN_H__
#define __EXC_MEAN_H__

#include <iostream>

using namespace std;

class bad_hmean
{
    private:
        double v1;
        double v2;
    public:
        bad_hmean(double a = 0, double b = 0) : v1(a), v2(b) {}
        void message();
};

inline void bad_hmean::message()
{
    cout << "hmean(" << v1 << ", " << v2 << "): invalid arguments: a = -b" << endl;
}

class bad_gmean
{
    public:
        double v1;
        double v2;
        bad_gmean(double a = 0, double b = 0) : v1(a), v2(b) {}
        const char *message();
};

inline const char * bad_gmean::message()
{
    return "gmean() arguments should be >= 0, ";
}

#endif