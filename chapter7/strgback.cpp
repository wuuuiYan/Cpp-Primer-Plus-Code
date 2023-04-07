#include <iostream>

using namespace std;

char *buildstr(char c, int n);

int main()
{
    char ch;
    int times;

    cout << "Enter a character: ";
    cin >> ch;

    cout << "Enter a integer: ";
    cin >> times;

    char *ps = buildstr(ch, times);
    cout << ps << endl;

    delete []ps;

    return 0;
}

//���շ��ص���ָ���ַ�����ָ��
char *buildstr(char c, int n)
{
    char * pstr = new char[n + 1]; //�����ڴ�ռ�

    pstr[n] = '\0'; //�ֶ���ȫ��β�ַ�
    for (int i = 0; i < n; i ++)
        pstr[i] = c;

    return pstr;
}
