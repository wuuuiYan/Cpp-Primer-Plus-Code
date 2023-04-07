#include <iostream>

using namespace std;

int main()
{
    int rats = 101;
    int &rodents = rats; //创建引用变量

    cout << "rats = " << rats << endl;
    cout << "rodents = " << rodents << endl;
    cout << "The address of rats is " << &rats << endl;
    cout << "The address of rodents is " << &rodents << endl;

    int bunnies = 50;
    rodents = bunnies; 
    //其实是通过引用变量修改了rats的值，而不是rodents与bunnies关联
    
    cout << "bunnies = " << bunnies << endl;
    cout << "rodents = " << rodents << endl;
    cout << "rats = " << rats << endl;
    cout << "The address of bunnies is " << &bunnies << endl;
    cout << "The address of rodents is " << &rodents << endl;

    return 0;
}