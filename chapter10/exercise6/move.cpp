#include "move.h"

using namespace std;

Move::Move(double a, double b)
{
    x = a;
    y = b;
}

Move Move::add(const Move &m) const
{
    Move temp;
    temp.x = x + m.x;
    temp.y = y + m.y;
    return temp;
}

void Move::showmove() const
{
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}

void Move::reset(double a, double b)
{
    x = a;
    y = b;
}
