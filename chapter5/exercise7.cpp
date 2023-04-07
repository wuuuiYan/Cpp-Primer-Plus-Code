#include <iostream>
#include <cstring>

using namespace std;

struct car
{
    string manufacture; //string类需要标准命名空间
    int date;
};

int main()
{
    int num;
    car *pcar; //指向结构体类型的指针

    cout << "How many cars do you wish to catalog?";
    cin >> num;

    cin.get(); //数字与字符交替输入

    pcar = new car[num];

    for (int i = 0; i < num; i ++)
    {
        cout << "car # " << i + 1 << ": " << endl;

        cout << "Please enter the make: ";
        getline(cin, pcar[i].manufacture);

        cout << "Please enter the year make: ";
        cin >> pcar[i].date;

        cin.get();
    }

    cout << "Here is your collection: " << endl;

    for (int i = 0; i < num; i ++)
    {
        cout << pcar[i].date << " " << pcar[i].manufacture << endl;
    }

    delete[] pcar;

    return 0;
}
