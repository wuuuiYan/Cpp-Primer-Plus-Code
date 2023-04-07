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

//最终返回的是指向字符串的指针
char *buildstr(char c, int n)
{
    char * pstr = new char[n + 1]; //开辟内存空间

    pstr[n] = '\0'; //手动补全结尾字符
    for (int i = 0; i < n; i ++)
        pstr[i] = c;

    return pstr;
}
