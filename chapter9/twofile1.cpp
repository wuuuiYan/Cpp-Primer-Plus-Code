#include <iostream>

using namespace std;

int tom = 3; //�����ⲿ�����Ե�ȫ�ֱ���
int dick = 30;  //�����ⲿ�����Ե�ȫ�ֱ���
static int harry = 300; //�ڲ�������

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