#include <iostream>

using namespace std;
const int size = 20;

int main()
{
    char first_name[size], last_name[20];
    char grade;
    int age;

    cout << "What is your first name?";
    cin.getline(first_name, size);
    cout << "What is your last name?";
    cin.getline(last_name, size);

    cout << "What letter grade do you deserve?";
    cin >> grade;
    cout << "What is your age?";
    cin >> age;

    cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << char(grade + 1) << endl;
    //char类型在内存中存放的形式是整型，但因为cout是智能对象，单独输出grade时cout可根据其类型自动转换
    //但想要向下调整成绩，需要对整型 + 1，这时cout判断(grade + 1)的类型是整型，所以必须进行强制类型转换
    cout << "Age: " << age << endl;

    return 0;
}