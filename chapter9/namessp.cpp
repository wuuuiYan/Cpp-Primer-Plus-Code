#include <iostream>
#include "namesp.h"
//使用引号括起来的文件优先在当前路径进行寻找

int main()
{
    using debts::Debt;
    using debts::showDebt;

    Debt golf = {{"Micheal", "Jordan"}, 120.0};
    showDebt(golf);
    
    return 0;
}