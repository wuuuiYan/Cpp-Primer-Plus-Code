#include <iostream>
#include <valarray>
#include <cstdlib>
#include <algorithm>

using namespace std;

typedef valarray<int> vint;

const int SIZE = 12;

void show(const vint &v, int cols);

int main()
{
    vint valint(SIZE);

    int i;
    for(i = 0; i < SIZE; i ++)
        valint[i] = rand() % 10;

    cout << "Original array: " << endl;
    show(valint, 3); //��valint�����е���ʽ���

    cout << "Second column: " << endl;
    vint vcol = (valint[slice(1, 4, 3)]);
    //������Ϊ1��Ԫ�ؿ�ʼȡ��һ��ȡ4��Ԫ�أ�ÿ��Ԫ��֮��ļ��Ϊ3
    show(vcol, 1); //��vcol��һ�е���ʽ���

    return 0;
}

void show(const vint &v, int cols)
{
    int lim = v.size();
    for(int i = 0; i < lim; i ++)
    {
        cout << v[i];
        if(i % cols == cols - 1)
            cout << endl;
        else
            cout << " ";
    }
    if(lim / cols != 0)
        cout << endl;
}