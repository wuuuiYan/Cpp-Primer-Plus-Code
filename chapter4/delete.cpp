#include <iostream>
#include <cstring>

using namespace std;

char * getname(void);

int main()
{
    char * name;
    name = getname();
    cout << name << " at " << (int *)name << endl;
    delete []name;

    name = getname();
    cout << name << " at " << (int *)name << endl;
    delete []name;

    return 0;
}

char * getname()
{
    char temp[80];

    cout << "Enter last name:";
    cin >> temp;

    char * pn = new char[strlen(temp) + 1];
    //根据输入内容的长度来开辟内存，并返回地址

    strcpy(pn, temp);
    return pn;
} 
