#include <iostream>
#include <string>
#include <valarray>
#include "studentc.h"

using namespace std;

double Student::Average() const
{
    if (ArrayDb::size() > 0)
        return ArrayDb::sum() / ArrayDb::size();
    else
        return 0;
}

const string &Student::Name() const
{
    return (const string &) *this;
}

double &Student::operator[](int n)
{
    return ArrayDb::operator[](n);
}

double Student::operator[](int n) const
{
    return ArrayDb::operator[](n);
}

istream &operator>>(istream &is, Student &stu)
{
    is >> (string &) stu;
    return is;
}

istream &getline(istream &is, Student &stu)
{
    getline(is, (string &) stu);
    return is;
}

/*
ostream &Student::arr_out(ostream &os) const
{ 
    int lim = ArrayDb::size();

    if (lim > 0)
    {
        int i;
        for (i = 0; i < lim; i ++)
        {
            os << ArrayDb::operator[](i) << " ";
            if (i % 5 == 4)
                os << endl;
        }
        if (i % 5 != 0)
            os << endl;
    }
    else 
        os << "Empty array!" << endl;
    return os; 
}
*/

ostream &operator<<(ostream &os, const Student &stu)
{
    int i;
    os << "Scores for " << (const string &) stu << ": " << endl;
    int lim = stu.size();

    if (lim > 0)
    {
        int i;
        for (i = 0; i < lim; i ++)
        {
            os << stu.operator[](i) << " ";
            if (i % 5 == 4)
                os << endl;
        }
        if (i % 5 != 0)
            os << endl;
    }
    else 
        os << "Empty array!" << endl;
    
    return os;
} 