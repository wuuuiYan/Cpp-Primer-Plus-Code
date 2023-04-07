#include <iostream>
#include <cstring>
#include <array>

using namespace std;

const int Seasons = 4;
const array<string, Seasons> Snames = {"Spring", "Summer", "Fall", "Winter"};

void fill(array<double, Seasons> *pa);
void show(array<double, Seasons> pa);

int main()
{
    array<double, Seasons> expenses;

    fill(&expenses);
    show(expenses);

    return 0;
}

void fill(array<double, Seasons> *pa)
{
    for (int i = 0; i < Seasons; i ++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> (*pa)[i]; //��ȡ�����ٰ��±�����
        //������Բ���ţ���Ϊ�����ű����ȡ��������������ȼ�Ҫ��
    }
}

void show(array<double, Seasons> pa)
{
    double total = 0.0;

    cout << "EXPENSES: " << endl;
    for (int i = 0; i < Seasons; i ++)
    {
        cout << Snames[i] << ": $" << pa[i] << endl;
        total += pa[i];
    }
    cout << "Total expenses: " << total << endl;
}