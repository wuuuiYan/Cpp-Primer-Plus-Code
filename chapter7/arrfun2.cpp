#include <iostream>

using namespace std;

const int ArSize = 8;

int sum_arr(int arr[], int n);

int main()
{
    int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};

    cout << "cookies address: " << cookies << endl;
    cout << "size of cookies: " << sizeof(cookies) << endl;
    //输出的是整个数组的长度

    int sum = sum_arr(cookies, ArSize);
    cout << "Total cookies eaten: " << sum << endl;

    sum = sum_arr(cookies, 3);
    cout << "Fisrt three eater ate: " << sum << endl;

    sum = sum_arr(cookies + 4, 4);
    cout << "Last four eater ate: " << sum << endl;

    return 0;
}

int sum_arr(int arr[], int n)
{
    int total = 0;

    cout << "arr address: " << arr << endl;
    //传递的是数组的首地址，因此函数中操作的就是数组本身，这也暗含了修改原数组的风险
    cout << "size of arr: " << sizeof(arr) << endl;
    //输出的是指针arr的大小，占八个字节。因此还需要传递数组的长度，这样程序才能知道到哪里停止

    for (int i = 0; i < n; i ++)
        total += arr[i];

    return total;
}