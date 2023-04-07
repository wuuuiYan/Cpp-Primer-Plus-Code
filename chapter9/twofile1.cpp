#include <iostream>

using namespace std;

int tom = 3; //具有外部链接性的全局变量
int dick = 30;  //具有外部链接性的全局变量
static int harry = 300; //内部链接性

void remote_access();

int main()
{
    cout << "main() reports the following addresses: " << endl;
    cout << "&tom = " << &tom << " ";
    cout << "&dick = " << &dick << " ";
    cout << "&harry = " << &harry << " ";

    cout << endl;

    remote_access();

    return 0;
}