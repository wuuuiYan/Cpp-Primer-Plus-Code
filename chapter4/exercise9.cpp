#include <iostream>
#include <cstring>

using namespace std;

struct CandyBar
{
    char brand[20];
    float weight;
    unsigned int calorie;
};

int main()
{
    //CandyBar snack[3] = {{"Mocha Munch", 2.3, 350}, {"Flap Fleming", 3.2, 500}, {"Micheal", 4.3, 400}};
    CandyBar * pt = new CandyBar[3];//指向整个数组的指针

    strcpy(pt[0].brand, "Mocha Munch");
    pt[0].weight = 2.3;
    pt[0].calorie = 350;

    strcpy(pt[1].brand, "Flap Fleming");
    pt[1].weight = 3.2;
    pt[1].calorie = 500;

    strcpy(pt[2].brand, "Micheal");
    pt[2].weight = 4.3;
    pt[2].calorie = 400;

    cout << "1st Brand = " << pt[0].brand << endl;
    cout << "1st Weight = " << pt[0].weight << endl;
    cout << "1st Calorie = " << pt[0].calorie << endl;

    cout << "2nd Brand = " << pt[1].brand << endl;
    cout << "2nd Weight = " << pt[1].weight << endl;
    cout << "2nd Calorie = " << pt[1].calorie << endl;

    cout << "3th Brand = " << pt[2].brand << endl;
    cout << "3th Weight = " << pt[2].weight << endl;
    cout << "3th Calorie = " << pt[2].calorie << endl;

    delete [] pt;//释放指向整个数组的指针

    return 0;
}

