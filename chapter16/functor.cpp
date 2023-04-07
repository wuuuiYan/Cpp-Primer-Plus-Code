#include <iostream>
#include <iterator>
#include <list>
#include <algorithm>

using namespace std;

template <class T>
class TooBig
{
    private:
        T cutoff;
    public:
        TooBig(const T &t) : cutoff(t) {}
        bool operator()(const T &v) {return v > cutoff;}
};

void out_int(int n)
{
    cout << n << " ";
}

int main()
{
    TooBig<int> f100(100);
    int vals[10] = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
    list<int> yadayada(vals, vals + 10);
    list<int> etcetera(vals, vals + 10);

    cout << "Original lists: " << endl;
    for_each(yadayada.begin(), yadayada.end(), out_int);
    cout << endl;
    for_each(etcetera.begin(), etcetera.end(), out_int);
    cout << endl;

    cout << "Trimmed lists: " << endl;
    yadayada.remove_if(f100); //将f100作为函数符号使用，因为它是重载了()运算符的对象
    //将yadayada中的每一个元素都应用于f100(), 当返回值为真时移除该元素
    for_each(yadayada.begin(), yadayada.end(), out_int);
    cout << endl;

    etcetera.remove_if(TooBig<int>(200)); //创建匿名对象作为函数符号
    for_each(etcetera.begin(), etcetera.end(), out_int);
    cout << endl;

    return 0;
}