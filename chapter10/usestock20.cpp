#include <iostream>
#include "stock20.h"

using namespace std;

int main()
{
    Stock stock1("NanoSmart", 12, 20.0); //��ʽ���ù��캯��
    stock1.show();

    Stock stock2 = Stock("Boffo objects", 2, 2.0); //��ʽ���ù��캯��
    stock2.show();

    /*
    Stock stock1; //��ʽ�����û������Ĭ�Ϲ��캯������Ҫʹ��Բ����
    stock1.show();
    */

    /*cout << "Assign stock1 to stock2: " << endl;
    stock2 = stock1; //�������Ի��࿽��
    cout << "Listening stock1 and stock2: " << endl;
    stock1.show();
    stock2.show();

    cout << "Using a constructor to reset an object: " << endl;
    stock1 = Stock("Nifty", 10, 50.0); 
    //��ʽ���ù��캯������һ����ʱ����Ȼ���ٸ��Ƹ�stock1�����ǳ�ʼ����Ч�ʸ���
    cout << "Revised stock1: " << endl;
    stock1.show();*/

    Stock top = stock1.topval(stock2);
    cout << "\nNow show the top value: ";
    top.show();

    return 0;
}
