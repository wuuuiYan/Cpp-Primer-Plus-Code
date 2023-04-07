#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string name;
    string dessert;

    cout << "Enter your name: " << endl;
    getline(cin, name);
    cout << "Enter your favorite dessert: " << endl;
    getline(cin, dessert);
    //当使用字符数组读取整行输入时，使用cin.getline，此时getline是cin对象的一个成员函数
    //当使用字符串读取整行输入时，直接使用getline，此时getline是<cstring>中的一个库函数
    //并且字符串库函数getline读取时只需指定来源，不需要指定大小，大小由程序在运行过程中自行判断

    cout << "I have some delicious " << dessert << " for you, " << name << endl;
    
    return 0;
}
