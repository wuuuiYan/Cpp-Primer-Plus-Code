#include <iostream>

using namespace std;

const int ArSize = 10;

void strcount(const char *str);

int main()
{
    char input[ArSize];
    char next;

    cout << "Enter a line: " << endl;
    cin.get(input, ArSize);
    while (cin)
    {
        cin.get(next);
        //判断读入是因为什么原因终止
        while (next != '\n')
            cin.get(next);

        strcount(input);
        cout << "Enter next line(empty line to quit)" << endl;
        cin.get(input, ArSize);
    }

    cout << "Byebye" << endl;

    return 0;
}

void strcount(const char *str)
{
    static int total = 0; //无链接性，只会被初始化一次
    int count = 0; //自动变量，每一次调用都会初始化
    while (*str)
    {
        count++;
        str++;
    }
    total += count;
    cout << count << " characters" << endl;
    cout << total << " characters" << endl;
}

