#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char input;

    cout << "Please enter a character:";
    cin >> input;

    while (input != '@')
    {
        if (isdigit(input))
        {
            cin >> input;
            continue;
        }
        else if (islower(input))
        {
            input = toupper(input);
        }
        else if (isupper(input))
        {
            input = tolower(input);
        }
        cout << input;
        cin >> input;
    }

    return 0;
}