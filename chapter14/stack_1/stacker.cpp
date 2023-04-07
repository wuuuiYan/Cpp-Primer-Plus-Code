#include <iostream>
#include <string>
#include "stack.h"
#include <cctype>

using namespace std;

const int Num = 10;

int main()
{
    int nextin = 0;
    int processed = 0;

    const char *in[Num] = {
        "1: Hank", "2: Kiki",
        "3: Betty", "4: Ian",
        "5: Wolf", "6: Portia",
        "7: Joy", "8: Xav",
        "9: Juan", "10: Misha"
    };
    Stack<const char *> st; //存放指向字符串的指针的栈

    while (!st.isfull())
    {
        st.push(in[nextin++]); //字符串常量本身就是地址
    }

    const char *out[Num];
    while (!st.isempty())
    {
        st.pop(out[processed++]);
    }

    for (int i = 0; i < Num; i ++)
    {
        cout << out[i] << endl;
    }

    return 0;
}