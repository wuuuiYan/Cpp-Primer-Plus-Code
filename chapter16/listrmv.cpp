#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

const int LIM = 10;

void Show(int n) {cout << n << " ";}

int main()
{
    int ar[LIM] = {4, 5, 4, 2, 2, 3, 4, 8, 1, 4};
    list<int> la(ar, ar + 10);
    list<int> lb(ar, ar + 10);

    cout << "Original list: " << endl;
    cout << "la: ";
    for_each(la.begin(), la.end(), Show);
    cout << endl;
    cout << "lb: ";
    for_each(lb.begin(), lb.end(), Show);
    cout << endl;

    la.remove(4);
    cout << "After remove(4) method: " << endl;
    cout << "la: ";
    for_each(la.begin(), la.end(), Show);
    cout << endl;

    list<int>::iterator last;
    last = remove(lb.begin(), lb.end(), 4); //函数返回满足条件的区间的超尾
    cout << "After remove(4) function: " << endl;
    cout << "lb: ";
    for_each(lb.begin(), lb.end(), Show);
    //remove()函数不是成员函数，无法调整链表的长度
    //只是将满足条件的值放在容器的最前面，因此直接传入首位迭代器会全部输出，后面的值可能不满足条件
    cout << endl;

    lb.erase(last, lb.end());
    cout << "After erase() function: " << endl;
    cout << "lb: ";
    for_each(lb.begin(), lb.end(), Show);
    cout << endl;

    return 0;
}