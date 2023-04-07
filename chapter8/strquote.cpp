#include <iostream>
#include <string>

using namespace std;

string version1(const string &s1, const string &s2);
const string &version2(string &s1, const string &s2);
const string &version3(string &s1, const string &s2);

int main()
{
    string input;
    string result;
    string copy;

    cout << "Enter a stirng: ";
    getline(cin, input);
    copy = input;

    cout << "Your string as entered: " << input << endl;
    result = version1(input, "***");
    cout << "Your string enhanced: " << result << endl;
    cout << "Your original string: " << input << endl;

    cout << "--------------------------------" << endl;
    result = version2(input, "###");
    cout << "Your string enhanced: " << result << endl;
    cout << "Your original string: " << input << endl;

    cout << "--------------------------------" << endl;
    input = copy;
    result = version3(input, "@@@");
    cout << "Your string enhanced: " << result << endl;
    cout << "Your original string: " << input << endl;

    return 0;
}

//第二个形参使用const修饰，当实参与形参类型不匹配时可以进行类型转换
string version1(const string &s1, const string &s2)
{
    string temp;
    temp = s2 + s1 + s2;

    return temp;
}

const string &version2(string &s1, const string &s2)
{
    s1 = s2 + s1 + s2;
    return s1; //这种做法将修改主函数中的变量
}

const string &version3(string &s1, const string &s2)
{
    string temp;
    temp = s2 + s1 + s2;

    return temp; //这种做法返回了不存在对象的引用
}
