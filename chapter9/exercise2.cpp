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
    static int total = 0; //�������ԣ�ֻ�ᱻ��ʼ��һ��
    int count = 0; //�Զ�������ÿһ�ε��ö����ʼ��
    count = str.size();
    total += count;
    cout << count << " characters" << endl;
    cout << total << " characters" << endl;
}

