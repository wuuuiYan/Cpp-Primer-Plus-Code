#include <iostream>
#include "support.h"

using namespace std;

double warming = 0.3; //全局变量，外部链接性，静态存储持续性

int main()
{
    cout << "Global warming is " << warming << " degrees." << endl;

    update(0.1);
    cout << "Global warming is " << warming << " degrees." << endl;

    local();
    cout << "Global warming is " << warming << " degrees." << endl;

    return 0;
}