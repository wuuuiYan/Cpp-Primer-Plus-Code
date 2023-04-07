#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;

    char ch;

    cout << "Enter text for analysis, and type @ to terminate the input" << endl;

    cin.get(ch);

    while (ch != '@')
    {
        if (isalpha(ch))
            chars++;
        else if (isspace(ch))
            whitespace++;
        else if (isdigit(ch))
            digits++;
        else if (ispunct(ch))
            punct++;
        else
            others++;

        cin.get(ch); //为下一次判断读入
    }

    cout << chars << " letters, " << whitespace << " whitespaces, " << digits << " digits, " << punct << " punctuations, " << others << " others." << endl;
    
    return 0;
}