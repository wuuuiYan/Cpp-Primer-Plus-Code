#include  <iostream>

using namespace std;

int main()
{
    double arr[5] = {21.1, 32.8, 23.4, 45.2, 37.4};
    double *pt = arr;

    cout << "*pt     = " << *pt << endl;

    cout << "*++pt   = " << *++pt << endl; 
    //前缀自增运算符与解除引用运算符优先级相同，因此从右到左结合即可

    cout << "++*pt   = " << ++*pt << endl; //注意这一步操作会改变arr[1]的值
    //前缀自增运算符与解除引用运算符优先级相同，因此从右到左结合即可

    cout << "(*pt)++ = " << (*pt)++ << endl;
    //括号运算符优先级最高，先输出33.8，然后将数组元素自增到34.8

    cout << "*pt     = " << *pt << endl;

    cout << "*pt++   = " << *pt++ << endl;
    //后缀自增运算符的优先级比解除引用运算符的优先级高，
    //但是后缀运算符整体(pt++)要先使用pt本身再自增，所以输出arr[1]的值，同时pt指向了arr[2]
    //而又由于优先级问题，所以自增是对指针自增，不是对数值自增

    cout << "*pt     = " << *pt << endl;

    return 0;
}