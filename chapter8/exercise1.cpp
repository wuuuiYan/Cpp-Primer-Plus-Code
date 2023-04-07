#include <iostream>

using namespace std;

void show(const char *str, int n = 0);

int main()
{
    show("Hello World");
    show("Good morning");
    show("I love you, Rick!", 8);
    //第二个非零参数不代表打印字符串的次数，只是起一个判断非零的作用

    return 0;
}

void show(const char *str, int n)
{
    static int num = 0;
    //关键字static定义静态变量：效果类似于全局变量、默认初始值为零、只初始化一次、
    num++;

    if (n == 0)
        cout << str << endl;
    else
    {
        for (int i = 0; i < num; i ++)
            cout << str << endl;
    }
}