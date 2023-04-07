#include <iostream>
#include "stonewt1.h"


using namespace std;

int main()
{
    Stonewt poppins(9, 2.8);

    double p_wt = poppins; //隐式使用转换函数
    // double p_wt = double(poppins);
    cout << "poppins = " << p_wt << " pounds." << endl;

    int weight = poppins;
    cout << "poppins = " << weight << " pounds." << endl;

    //显式调用转换函数
    cout << "poppins = " << int(poppins) << " pounds." << endl;
    cout << "poppins = " << double(poppins) << " pounds." << endl;
    

    return 0;
}