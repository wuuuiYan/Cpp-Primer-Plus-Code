#include <iostream>

using namespace std;

int main()
{
    int n = 10;
    int m = 100;
    const int *pt = &n;

    cout << "1):n = " << n << endl;

    //����ͨ��ָ������ָ���޸���ָ������ֵ���������һ�д���ᱨ��
    // *pt = 20;
    n = 100; //���Ⲣ����ζ��n�Ǹ�����
    cout << "2):n = " << n << endl;

    pt = &m; //�������޸�ָ����ָ��Ķ���
    cout << "*pt = " << *pt << endl;
    cout <<  "m = " << m << endl;

    return 0;
}