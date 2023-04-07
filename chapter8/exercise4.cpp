#include <iostream>
#include <cstring>

using namespace std;

struct stringy
{
    char *str;
    int ct;
};

void set(stringy &str, const char *source);
void show(stringy str, int times = 1);
void show(const char *ch, int times = 1);

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);

    show(beany);
    show(beany, 2);

    testing[0] = 'D';
    testing[1] = 'u';

    show(testing);
    show(testing, 3);
    show("Done!");

    return 0;
}

void set(stringy &str, const char *source)
{
    str.ct = strlen(source) + 1;
    str.str = new char[str.ct];
    strcpy(str.str, source);
}

void show(const stringy str, int times)
{
    for (int i = 0; i < times; i ++)
    {
        cout << str.str << endl;
    }
}

void show(const char *ch, int times)
{
    for (int i = 0; i < times; i ++)
    {
        cout << ch << endl;
    }
}