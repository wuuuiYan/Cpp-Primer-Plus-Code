#include "sales.h"

using namespace std;

Sales::Sales(int yy)
{
    year = yy;
    for (int i = 0; i < MONTHS; i ++)
        gross[i] = 0;
}

Sales::Sales(int yy, const double *gr, int n)
{
    year = yy;
    int lim = n < MONTHS ? n : MONTHS;
    int i;
    for (i = 0; i < lim; i ++) gross[i] = gr[i];
    for (; i < MONTHS; i ++) gross[i] = 0; 
}

double Sales::operator[](int i) const
{
    if(i < 0 || i >= 12)
        throw bad_index(i);
    return gross[i];
}
double &Sales::operator[](int i)
{
    if(i < 0 || i >= 12)
        throw bad_index(i);
    return gross[i];
}

double LabeledSales::operator[](int i) const
{
    if(i < 0 || i >= 12)
        throw nbad_index(label, i);
    return Sales::operator[](i); //注意完整的函数名与函数参数列表的圆括号
}

double &LabeledSales::operator[](int i)
{
    if(i < 0 || i >= 12)
        throw nbad_index(label, i);
    return Sales::operator[](i);
}
