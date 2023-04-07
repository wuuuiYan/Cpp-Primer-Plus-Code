#include <iostream>

using namespace std;

const int strsize = 40;
const int usersize = 4;

struct bop{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};

bop user[usersize] = {
    {},
    {},
    {},
    {}
};

int main()
{
    return 0;
}