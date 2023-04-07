#include <iostream>

using namespace std;

int main()
{
    int rats = 10;
    int &rodents = rats; //创建引用变量

    cout << "rats = " << rats << endl;
    cout << "rodents = " << rodents << endl;

    rodents++;
    cout << "rats = " << rats << endl;
    cout << "rodents = " << rodents << endl;

    cout << "The address of rats is " << &rats << endl;
    cout << "The address of rodents is " << &rodents << endl;

    return 0;
}