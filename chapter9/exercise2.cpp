#include <iostream>
#include <cstring>

using namespace std;

void strcount(const string str);

int main()
{
    string input;

    cout << "Enter a line: " << endl;
    getline(cin, input);
    while (input != " ")
    {
        strcount(input);
        cout << "Enter next line(empty line to quit)" << endl;
        getline(cin, input);
    }

    cout << "Byebye" << endl;

    return 0;
}

void strcount(const string str)
{
    static int total = 0; //无链接性，只会被初始化一次
    int count = 0; //自动变量，每一次调用都会初始化
    count = str.size();
    total += count;
    cout << count << " characters" << endl;
    cout << total << " characters" << endl;
}

