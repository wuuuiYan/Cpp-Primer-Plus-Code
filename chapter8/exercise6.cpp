#include <iostream>
#include <cstring>

using namespace std;

template <typename T>
T maxn(T t[], int n);

template <>
char *maxn<char *>(char *str[], int n);

int main()
{
    int arr_i[6] = {1, 3, 5, 7, 9, 11};
    double arr_d[4] = {22.2, 13.8, 17.9, 54.2};
    char *str[5] = {"Hello World", "Good morning", "I love you, Rick", "What's this", "Bye bye"};
    //最好加上const修饰符，这样可以避免字符创常量被修改的风险
 
    cout << "The max value of int arr: " << maxn(arr_i, 6) << endl;
    cout << "The max value of int double: " << maxn(arr_d, 4) << endl;
    cout << "The max length of str: " << maxn(str, 5) << endl;

    return 0;
}

template <typename T>
T maxn(T t[], int n)
{
    T max = t[0];
    for (int i = 1; i < n; i ++)
        if (t[i] > max)
            max = t[i];

    return max;
}

template <> 
char * maxn<char *> (char *str[], int n)
{
    int pos = 0;
    for (int i = 1; i < n; i ++)
        if (strlen(str[pos]) < strlen(str[i]))
            pos = i;

    return str[pos];
}