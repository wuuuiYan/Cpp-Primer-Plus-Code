#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

bool same_after_reverse(const string &s);

int main()
{
    string str;

    cout << "Please enter a string: ";
    getline(cin, str);

    if(same_after_reverse(str))
        cout << "Palindromic" << endl;
    else
        cout << "Not Palindromic" << endl;

    return 0;
}

bool same_after_reverse(const string &s)
{
    string temp;

    for(int i = 0; i < s.size(); i ++)
    {
        if(isalpha(s[i]))
            temp += tolower(s[i]);
    }//对输入的字符串进行预处理

    string temp1 = temp;
    reverse(temp1.begin(), temp1.end());
    return temp == temp1;
}