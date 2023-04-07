#include <iostream>
#include <cstring>

using namespace std;

const int SIZE = 30;

struct CandyBar
{
    char brand[SIZE];
    double weight;
    int heat;
};
//结构体的定义要放在函数声明之前

void set_value(CandyBar &candybar, const char *str = "Mill Munch", const double w = 2.85, const int h = 350);
void show(const CandyBar &candybar);

int main()
{
    CandyBar bar;

    set_value(bar);
    show(bar);

    return 0;
}

void set_value(CandyBar &candybar, const char *str, const double w, const int h)
{
    strcpy(candybar.brand, str);
    candybar.weight = w;
    candybar.heat = h;
}

void show(const CandyBar &candybar)
{
    cout << "Brand: " << candybar.brand << endl;
    cout << "Weight: " << candybar.weight << endl;
    cout << "Heat: " << candybar.heat << endl;
}