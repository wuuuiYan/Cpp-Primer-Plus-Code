#include <iostream>

using namespace std;

const int ArSize = 8;

int sum_arr(int arr[], int n);

int main()
{
    int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};

    cout << "cookies address: " << cookies << endl;
    cout << "size of cookies: " << sizeof(cookies) << endl;
    //���������������ĳ���

    int sum = sum_arr(cookies, ArSize);
    cout << "Total cookies eaten: " << sum << endl;

    sum = sum_arr(cookies, 3);
    cout << "Fisrt three eater ate: " << sum << endl;

    sum = sum_arr(cookies + 4, 4);
    cout << "Last four eater ate: " << sum << endl;

    return 0;
}

int sum_arr(int arr[], int n)
{
    int total = 0;

    cout << "arr address: " << arr << endl;
    //���ݵ���������׵�ַ����˺����в����ľ������鱾����Ҳ�������޸�ԭ����ķ���
    cout << "size of arr: " << sizeof(arr) << endl;
    //�������ָ��arr�Ĵ�С��ռ�˸��ֽڡ���˻���Ҫ��������ĳ��ȣ������������֪��������ֹͣ

    for (int i = 0; i < n; i ++)
        total += arr[i];

    return total;
}