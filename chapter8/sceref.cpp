#include <iostream>

using namespace std;

int main()
{
    int rats = 101;
    int &rodents = rats; //�������ñ���

    cout << "rats = " << rats << endl;
    cout << "rodents = " << rodents << endl;
    cout << "The address of rats is " << &rats << endl;
    cout << "The address of rodents is " << &rodents << endl;

    int bunnies = 50;
    rodents = bunnies; 
    //��ʵ��ͨ�����ñ����޸���rats��ֵ��������rodents��bunnies����
    
    cout << "bunnies = " << bunnies << endl;
    cout << "rodents = " << rodents << endl;
    cout << "rats = " << rats << endl;
    cout << "The address of bunnies is " << &bunnies << endl;
    cout << "The address of rodents is " << &rodents << endl;

    return 0;
}