#include <iostream>
#include <cstring>

using namespace std;

struct Pizza
{
    char company[20];
    float diameter;
    float weight;
};

int main()
{
    Pizza dinner;

    cout << "Please enter the Pizza's company: ";
    cin.getline(dinner.company, 20);
    cout << "Please enter the size of Pizza in inches: ";
    cin >> dinner.diameter;
    cout << "Please enter the weight of Pizza in pounds: ";
    cin >> dinner.weight;

    cout << "Pizza company: " << dinner.company << "Pizza diameter: " << dinner.diameter << "Pizza pounds: " << dinner.weight << endl;
    
    return 0;
}