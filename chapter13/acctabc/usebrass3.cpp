#include <iostream>
#include <string>
#include "acctabc.h"

using namespace std;

const int CLIENTS = 3;

int main()
{
    AcctABC *p_clients[CLIENTS];
    string temp;
    long tempnum;
    double tempbal;
    int kind;

    for (int i = 0; i < CLIENTS; i ++)
    {
        cout << "Enter the client's name: ";
        getline(cin, temp);
        cout << "Enter client's account number: ";
        cin >> tempnum;
        cout << "Enter opening balance: $";
        cin >> tempbal;
        cout << "Enter 1 for Brass or enter 2 for BrassPlus: ";
        while(cin >> kind && (kind != 1 && kind != 2))
            cout << "Enter either 1 or 2: ";
        if (kind == 1)
            p_clients[i] = new Brass(temp, tempnum, tempbal);
        else
        {
            double tmax, trate;
            cout << "Enter the overdraft limit: $";
            cin >> tmax;
            cout << "Enter the rate: ";
            cin >> trate;
            p_clients[i] = new BrassPlus(temp, tempnum, tempbal, tmax, trate);
        }
        while(cin.get() != '\n');
    }
    cout << endl;

    for (int i = 0; i < CLIENTS; i ++)
    {
        p_clients[i]->ViewAcct(); //虚方法的调用
        cout << endl;
    }
    
    for (int i = 0; i < CLIENTS; i ++)
        delete p_clients[i]; 

    return 0;
}