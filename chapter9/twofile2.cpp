#include <iostream>

using namespace std;

extern int tom; //�����ٸ�ֵ��ֻ�������ⲿ����
static int dick = 10; //��̬�����������ڲ�������
int harry = 200; //�����ⲿ�����Ե�ȫ�ֱ���

void remote_access()
{
    cout << "remote_access() reports the following addresses: " << endl;
    cout << "&tom = " << &tom << " ";
    cout << "&dick = " << &dick << " ";
    cout << "&harry = " << &harry << " ";
}