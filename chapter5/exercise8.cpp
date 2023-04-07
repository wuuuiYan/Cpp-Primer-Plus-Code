#include <iostream>
#include <cstring>

using namespace std;

const char STOP[] = "done";

int main()
{
    char words[20];
    int cnt = 0;

    cout << "Enter words (to stop, type the word done): ";

    do
    {
        cin >> words;
        cin.get(); //cin读取时不会将空白字符从输入队列中删除
        cnt ++;
    } while (strcmp(words, STOP) != 0);

    cout << "You enter a total of " << cnt - 1 << " words." << endl;

    return 0;
}