#include "mytime4.h"
#include <iostream>

using namespace std;

Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h, int m)
{
    hours = h;
    minutes = m;
}

void Time::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::AddHr(int h)
{
    hours += h;
}

void Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}

Time operator +(const Time &t1, const Time &t2)
{
    Time sum;

    sum.minutes = t1.minutes + t2.minutes;
    sum.hours = t1.hours + t2.hours + sum.minutes / 60;
    sum.minutes %= 60;

    return sum;
}

Time operator-(const Time &t1, const Time &t2)
{
    Time diff;

    int tot1, tot2;
    tot1 = t1.hours * 60 + t1.minutes;
    tot2 = t2.hours * 60 + t2.minutes;

    diff.hours = (tot1 - tot2) / 60;
    diff.minutes = (tot1 - tot2) % 60;

    return diff;
}

Time operator*(const Time &t, double mult)
{
    Time result;

    long totalminutes = t.hours * mult * 60 + t.minutes * mult;
    result.minutes = totalminutes % 60;
    result.hours = totalminutes / 60;

    return result;
}

/*
void Time::Show() const
{
    cout << hours << " hours, " << minutes << " minutes." << endl;
}
*/

//形参的顺序有要求，必须是double类型在前
Time operator*(double mult, const Time &t)
{
    Time result;

    //友元函数可以访问私有变量
    long totalminutes = t.hours * mult * 60 + t.minutes * mult;
    result.minutes = totalminutes % 60;
    result.hours = totalminutes / 60;

    return result;

    // return t * mult;
}


/*
Time operator*(double mult, const Time &t)
{
    return t * mult;
}
*/

ostream &operator<<(ostream &os, const Time &t)
{
    os << t.hours << " hours, " << t.minutes << " minutes.";
    return os;
}