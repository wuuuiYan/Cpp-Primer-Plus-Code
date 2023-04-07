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
    show(valint, 3); //将valint以三列的形式输出

    cout << "Second column: " << endl;
    vint vcol = (valint[slice(1, 4, 3)]);
    //从索引为1的元素开始取，一共取4个元素，每个元素之间的间隔为3
    show(vcol, 1); //将vcol以一列的形式输出

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