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
        //�ж϶�������Ϊʲôԭ����ֹ
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
    static int total = 0; //�������ԣ�ֻ�ᱻ��ʼ��һ��
    int count = 0; //�Զ�������ÿһ�ε��ö����ʼ��
    while (*str)
    {
        count++;
        str++;
    }
    total += count;
    cout << count << " characters" << endl;
    cout << total << " characters" << endl;
}

