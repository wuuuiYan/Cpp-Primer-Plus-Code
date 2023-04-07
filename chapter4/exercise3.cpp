#include <iostream>
#include <string>

using namespace std;

const int SIZE = 20;

int main()
{
    char first_name[SIZE], last_name[SIZE];
    char full_name[2 * SIZE];

    cout << "Enter your first name: ";
    cin.getline(first_name, SIZE);
    cout << "Enter your last name: ";
    cin.getline(last_name, SIZE);

    strcpy(full_name, last_name);
    strcat(full_name, ", ");
    strcat(full_name, first_name);
    cout << "Here is the information in a single string: " << full_name << endl;

    return 0;
}
