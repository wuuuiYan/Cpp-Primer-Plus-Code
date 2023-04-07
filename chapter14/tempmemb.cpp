#include <iostream>

using namespace std;

template<class T>
class beta
{
    private:
        template<class V>
        class hold
        {
            private:
                V val;
            public:
                hold(V v = 0) : val(v) {}
                void show() const {cout << val << endl;}
                V Value() const {return val;} 
        };
        hold<T> q;
        hold<int> n;
    public:
        beta(hold<T> t, hold<int> i) : q(t), n(i) {}
        void Show() const {q.show(); n.show();}
        template<class U>
        U blab(U u, T t) {return (q.Value() + n.Value()) * u / t;}
};

int main()
{
    beta<double> guy(3.5, 3);
    cout << "T was set to double" << endl;
    guy.Show();

    cout << "V == T, they are all  double" << endl;
    cout << "U was set to int, so output value is int type" << endl;
    cout << guy.blab(10, 2.3) << endl;

    cout << "U was set to double, so output value is double type" << endl;
    cout << guy.blab(10.0, 2.3) << endl;

    return 0;
}