#include <iostream>

using namespace std;

struct Pizza
{
    char company[20];
    float diameter;
    float weight;
};

int main()
{
    Pizza * pt = new Pizza;

    cout << "Please enter the Pizza's company: ";
    cin.getline(pt->company, 20);
    cout << "Please enter the size of Pizza in inches: ";
    cin >> pt->diameter;
    cout << "Please enter the weight of Pizza in pounds: ";
    cin >> pt->weight;

    cout << "Pizza company: " << pt->company << "Pizza diameter: " << pt->diameter << "Pizza pounds: " << pt->weight << endl;
    
    delete pt;

    return 0;
}
