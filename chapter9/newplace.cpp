#include <iostream>
#include <new>

using namespace std;

const int N = 5;
const int BUF = 512;

char buffer[BUF] = "Hello! World";

int main()
{
    double *pd1, *pd2;
    int i;

    cout << "Calling new and placement new: " << endl;
    pd1 = new double[N];//�����÷�
    pd2 = new (buffer) double[N];//����pd2ָ����buffer��ԭλ�ã��Ժ�ͨ������ָ��pd2�Ϳ����޸�buffer��ַ����ֵ

    for (i = 0; i < N; i ++)
        pd2[i] = pd1[i] = 1000 + 20.0 * i;

    cout << "pd1 = " << pd1 << ", buffer = " << (void *)buffer << endl;
    //��������Ȼ�������ʹ�������ĵ�ַ�������ַ������������ǿ������ת����cout���ܶ���ͻ���ݸõ�ַ���������ַ���
    //cout << "1" << endl;

    for (i = 0; i < N; i ++)
    {
        cout << pd1[i] << " at " << &pd1[i] << "; ";
        cout << pd2[i] << " at " << &pd2[i] << endl;
    }

    cout << "\nCalling new and placement new a second time: " << endl;
    double *pd3, *pd4;
    pd3 = new double[N];
    pd4 = new (buffer) double[N];
    for (i = 0; i < N; i ++)
        pd4[i] = pd3[i] = 1000 + 40.0 * i;
    
    for (i = 0; i < N; i ++)
    {
        cout << pd3[i] << " at " << &pd3[i] << "; ";
        cout << pd4[i] << " at " << &pd4[i] << endl;
    }

    cout << "\nCalling new and placement new a third time: " << endl;
    delete[] pd1;
    pd1 = new double[N];
    pd2 = new (buffer + N * sizeof(double)) double[N]; //�õ�ַƫ�Ʋ�����λ

    for (i = 0; i < N; i ++)
        pd2[i] = pd1[i] = 1000 + 20.0 * i;

    for (i = 0; i < N; i ++)
    {
        cout << pd1[i] << " at " << &pd1[i] << "; ";
        cout << pd2[i] << " at " << &pd2[i] << endl;
    }

    delete[] pd1;
    delete[] pd3;
    //deleteֻ�����ڳ���new��������ٵ��ڴ�ռ䣬���������ڶ�λnew�����
    //��Ϊdeleteֻ������ɾ����̬�ڴ�ռ�(�ڶ�heap��)����buffer�Ǿ�̬�ڴ�(ȫ�ֱ���)

    return 0;
}