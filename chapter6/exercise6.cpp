#include <iostream>
#include <string>

using namespace std;

struct Patrons{
    string name;
    double donation;
};

int main()
{
    int number;

    cout << "Please enter the number of donors: ";
    cin >> number;

    Patrons * ppatrons = new Patrons[number]; //动态分配数组

    for (int i = 0; i < number; i ++)
    {
        cout << "donor # " << i + 1 << ": " << endl;

        cout << "Please enter the name of donor: ";
        cin >> ppatrons[i].name; //指针操作

        cout << "Please enter the donation of donor: ";
        cin >> ppatrons[i].donation;
    }

    cout << "Grand Patrons: " << endl;

    for (int i = 0; i < number; i ++)
    {
        if (ppatrons[i].donation >= 10000)
        {
            cout << ppatrons[i].name << ": " << ppatrons[i].donation << endl;
        }
        else 
        {
            cout << "none" << endl;
        }
    }

        return 0;
}