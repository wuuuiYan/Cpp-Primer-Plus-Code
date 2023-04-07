#include <iostream>
#include "stack.h"
#include <cctype>

using namespace std;

const int MAX = 5;

int main()
{
    Stack st(MAX);
    Item item;

    for (int i = 0; i < MAX; i ++)
    {
        cout << "Enter a number you want to push to stack: ";
        cin >> item;
        while (cin.get() != '\n');
        st.push(item);
    }

    Stack st_new(st);
    for (int i = 0; i < MAX; i++)
    {
        st_new.pop(item);
        cout << item << " is poped." << endl;
    }

    return 0;
}