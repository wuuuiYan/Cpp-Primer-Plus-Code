#include "support.h"

using namespace std;

void update(double dt)
{
    warming += dt;
    cout << "Updating global warming to " << warming << " degrees." << endl;
}

void local()
{
    double warming = 0.8; //����������ľͽ�ԭ��

    cout << "Local warming = " << warming << " degrees." << endl;
    cout << "But global warming = " << ::warming << " degrees." << endl;
    //ʹ����������������::
}