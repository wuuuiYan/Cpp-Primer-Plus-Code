#include <iostream>
#include "stock20.h"

using namespace std;

int main()
{
    Stock stock1("NanoSmart", 12, 20.0); //��ʽ���ù��캯��
    cout << stock1 << endl;

    Stock stock2 = Stock("Boffo objects", 2, 2.0); //��ʽ���ù��캯��
    cout << stock2 << endl;

    const Stock *top = &stock1.topval(stock2);
    cout << "\nNow show the top value: ";
    cout << *top << endl;

    return 0;
}
