#include <iostream>

using namespace std;

void show(const char *str, int n = 0);

int main()
{
    show("Hello World");
    show("Good morning");
    show("I love you, Rick!", 8);
    //�ڶ�����������������ӡ�ַ����Ĵ�����ֻ����һ���жϷ��������

    return 0;
}

void show(const char *str, int n)
{
    static int num = 0;
    //�ؼ���static���徲̬������Ч��������ȫ�ֱ�����Ĭ�ϳ�ʼֵΪ�㡢ֻ��ʼ��һ�Ρ�
    num++;

    if (n == 0)
        cout << str << endl;
    else
    {
        for (int i = 0; i < num; i ++)
            cout << str << endl;
    }
}