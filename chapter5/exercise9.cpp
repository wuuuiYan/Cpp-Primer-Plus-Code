#include <iostream>
#include <string>

using namespace std;

const char STOP[] = "done";

int main()
{
    string words;
    int cnt = 0;

    cout << "Enter words (to stop, type the word done): ";

    do
    {
        cin >> words;
        cin.get(); //cin��ȡʱ���Ὣ�հ��ַ������������ɾ��
        cnt ++;
    } while (words != STOP); //ֱ��ʹ�ù�ϵ����������ַ����ıȽ�


    cout << "You enter a total of " << cnt - 1 << " words." << endl;

    return 0;
}