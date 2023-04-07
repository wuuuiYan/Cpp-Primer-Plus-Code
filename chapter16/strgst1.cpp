#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string letters;
    cout << "Enter the letter group(enter quit yo quit): ";
    while(cin >> letters && letters != "quit")
    {
        sort(letters.begin(), letters.end());
        cout << "Permutation: ";
        cout << letters << " ";
        while(next_permutation(letters.begin(), letters.end()))
            cout << letters << " ";
        cout << "\nEnter the next letter group(enter quit to quit): ";
    }

    return 0;
}