#include <iostream>
#include "move.h"

using namespace std;

int main()
{
    double x, y;

    Move m1(11.1, 22.2);
    Move m2(10.0, 20.0);
    Move m3;
    
    m1.showmove();
    m2.showmove();

    cout << "Enter new x and y: " << endl;
    cin >> x >> y;
    m1.reset(x, y);
    m1.showmove();

    m3 = m1.add(m2);
    m3.showmove();

    return 0;
}