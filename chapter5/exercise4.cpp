#include <iostream>

using namespace std;

const int money = 100;

int main()
{
    double Daphne = 100, Cleo = 100; //���붨���double����
    int cnt = 0;

    while (Daphne >= Cleo)
    {
        Daphne += money * 0.1;
        Cleo += Cleo * 0.05;

        cnt ++;
    }

    cout << cnt << endl;
    cout << "Daphne = " << Daphne << endl;
    cout << "Cleo = " << Cleo << endl;

    return 0;
}