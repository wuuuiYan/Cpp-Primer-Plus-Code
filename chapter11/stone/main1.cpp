#include <iostream>
#include "stonewt1.h"


using namespace std;

int main()
{
    Stonewt poppins(9, 2.8);

    double p_wt = poppins; //��ʽʹ��ת������
    // double p_wt = double(poppins);
    cout << "poppins = " << p_wt << " pounds." << endl;

    int weight = poppins;
    cout << "poppins = " << weight << " pounds." << endl;

    //��ʽ����ת������
    cout << "poppins = " << int(poppins) << " pounds." << endl;
    cout << "poppins = " << double(poppins) << " pounds." << endl;
    

    return 0;
}