#include <iostream>
#include "sales.h"

using namespace std;

int main()
{
    using namespace SALES; //一定要记得声明用户自己定义的名称空间

    double ar[4] = {11.1, 22.2, 33.3, 44.4};

    Sales s1(ar, 4);
    Sales s2;

    cout << endl;
    cout << "Now show two info: " << endl;
    
    s1.showSales();
    s2.showSales();

    return 0;
}