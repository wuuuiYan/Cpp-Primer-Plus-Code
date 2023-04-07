#include <iostream>

using namespace std;

int main()
{
    int row;

    cout << "Please enter the number of rows: ";
    cin >> row;

    for (int i = 0; i < row; i ++)
    {
        for (int j = 1; j < row - i; j ++)
            cout << ".";
        
        for (int k = 0; k <= i; k ++)
            cout << "*" ;
        
        cout << endl;
    }

    return 0;
}