#include <iostream>
#include <cstring>

using namespace std;

const int SIZE = 5;

void display(const string arr[], int n);

int main()
{
    string list[SIZE];

    cout << "Enter " << SIZE << " favorite food: " << endl;

    for (int i = 0; i < SIZE; i ++)
    {
        cout << (i + 1) << ": ";
        getline(cin, list[i]); //ָ��������ȥ��������
    }

    cout << "Your list: " << endl;
    display(list, SIZE);

    return 0;
}

//�β�ʹ�������ʾ��������������һ��ָ��
void display(const string arr[], int n)
{
    for (int i = 0; i < n; i ++)
    {
        cout << (i + 1) << arr[i] << endl;
    }
}