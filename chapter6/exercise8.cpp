#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    ifstream inFile;
    string filename;
    char ch;
    int cnt;

    cout << "Please enter the file name: ";
    getline(cin, filename);
    inFile.open(filename);

    if (!inFile.is_open())
    {
        cout << "Failed to open the file!" << endl;
        exit(EXIT_FAILURE);
    }

    while (inFile.eof())
    {
        inFile >> ch;
        cnt++;
    }

    cout << filename << " has " << cnt << "character.";
    inFile.close();

    return 0;
}