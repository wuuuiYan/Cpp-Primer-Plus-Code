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

//�ڶ����β�ʹ��const���Σ���ʵ�����β����Ͳ�ƥ��ʱ���Խ�������ת��
string version1(const string &s1, const string &s2)
{
    string temp;
    temp = s2 + s1 + s2;

    return temp;
}

const string &version2(string &s1, const string &s2)
{
    s1 = s2 + s1 + s2;
    return s1; //�����������޸��������еı���
}

const string &version3(string &s1, const string &s2)
{
    string temp;
    temp = s2 + s1 + s2;

    return temp; //�������������˲����ڶ��������
}
