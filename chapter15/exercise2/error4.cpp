#include <iostream>
#include <cstdlib>
#include <stdexcept>
#include <cmath>

using namespace std;

double hmean(double a, double b);
double gmean(double a, double b);

class bad_hmean : public logic_error
{
    public:
        bad_hmean(const string &what_arg = "hmean, invalid arguments") : logic_error(what_arg) {}
};

class bad_gmean : public logic_error
{
    public:
        bad_gmean(const string &what_arg = "gmean, invalid arguments") : logic_error(what_arg) {}
};

int main()
{
    double x, y, z;

    cout << "Enter two numbers: ";
    while(cin >> x >> y)
    {
        try
        {
            z = hmean(x, y);
            cout << "Harmonic mean of " << x << " and " << y << " is " << z << endl;
            z = gmean(x, y);
            cout << "Geometric mean of " << x << " and " << y << " is " << z << endl;
        }
        catch(bad_hmean &bh)
        {
            cout << bh.what() << endl;
            cout << "Enter a new pair of arguments: ";
            continue;
        }
        catch(bad_gmean &bg)
        {
            cout << bg.what() << endl;
            cout << "Sorry, quit now" << endl;
            break;
        }

        cout << "Enter next set of number: ";
    }

    return 0;
}

double hmean(double a, double b)
{
    if(a == -b)
        throw bad_hmean(); //直接使用默认参数

    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
    if (a < 0 || b < 0)
        throw bad_gmean();
    
    return sqrt(a * b);
}