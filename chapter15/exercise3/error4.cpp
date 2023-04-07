#include <iostream>
#include <cstdlib>
#include <stdexcept>
#include <cmath>

using namespace std;

double hmean(double a, double b);
double gmean(double a, double b);

class bad_mean : public logic_error
{
    private:
        double v1;
        double v2;
    public:
        bad_mean(double a, double b, const string &what_arg = "mean, error") : logic_error(what_arg), v1(a), v2(b) {}
        virtual void show() const;
};

class bad_hmean : public bad_mean
{
    public:
        bad_hmean(double a, double b, const string &what_arg = "hmean, invalid arguments") : bad_mean(a, b, what_arg) {}
        virtual void show() const;
};

class bad_gmean : public bad_mean
{
    public:
        bad_gmean(double a, double b, const string &what_arg = "gmean, invalid arguments") : bad_mean(a, b, what_arg) {}
        virtual void show() const;
};

void bad_mean::show() const
{
    cout << "v1 = " << v1 << ", v2 = " << v2 << endl;
}

void bad_hmean::show() const
{
    cout << what() << endl;
    bad_mean::show();
}

void bad_gmean::show() const
{
    cout << what() << endl;
    bad_mean::show();
}

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
        catch(bad_mean &bm)
        {
            if(typeid(bm) == typeid(bad_hmean))
            {
                bm.show();
                break;
            }
            if(typeid(bm) == typeid(bad_gmean))
            {
                bm.show();
                break;
            }
        }
        cout << "Enter next set of number: ";
    }

    return 0;
}

double hmean(double a, double b)
{
    if(a == -b)
        throw bad_hmean(a, b); //直接使用默认参数

    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
    if (a < 0 || b < 0)
        throw bad_gmean(a, b);
    
    return sqrt(a * b);
}