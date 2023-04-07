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
        getline(cin, list[i]); //指出到哪里去查找输入
    }

    cout << "Your list: " << endl;
    display(list, SIZE);

    return 0;
}

//形参使用数组表示法，但本质上是一个指针
void display(const string arr[], int n)
{
    for (int i = 0; i < n; i ++)
    {
        cout << (i + 1) << arr[i] << endl;
    }
}