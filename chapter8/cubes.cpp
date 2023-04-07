//什么时候使用按引用传递，什么时候使用按值传递
#include <iostream>

using namespace std;

double cube(double a);
double recube(double &ra);

int main()
{
    double x = 3.0;

    cout << cube(x) << " = cube of " << x << endl;
    cout << recube(x) << " = cube of " << x << endl;

    return 0;
}

double cube(double a)
{
    a *= a * a;
    return a;
}

double recube(double &ra)
{
    ra *= ra * ra;
    return ra;
}