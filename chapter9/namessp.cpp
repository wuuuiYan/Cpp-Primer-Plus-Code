#include <iostream>
#include "namesp.h"
//ʹ���������������ļ������ڵ�ǰ·������Ѱ��

int main()
{
    using debts::Debt;
    using debts::showDebt;

    Debt golf = {{"Micheal", "Jordan"}, 120.0};
    showDebt(golf);
    
    return 0;
}