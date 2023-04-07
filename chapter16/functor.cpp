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
    yadayada.remove_if(f100); //��f100��Ϊ��������ʹ�ã���Ϊ����������()������Ķ���
    //��yadayada�е�ÿһ��Ԫ�ض�Ӧ����f100(), ������ֵΪ��ʱ�Ƴ���Ԫ��
    for_each(yadayada.begin(), yadayada.end(), out_int);
    cout << endl;

    etcetera.remove_if(TooBig<int>(200)); //��������������Ϊ��������
    for_each(etcetera.begin(), etcetera.end(), out_int);
    cout << endl;

    return 0;
}