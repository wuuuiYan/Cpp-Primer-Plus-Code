#include <iostream>

using namespace std;

void showmenu();

int main()
{
    showmenu();

    char ch;
    cin.get(ch); //读取整行，并且不会丢弃末尾的换行符

    while (ch != 'c' && ch != 'p' && ch != 't' && ch != 'g')
    {
        cin.get(); //把输入末尾的回车消耗掉
        cout << "Please enter a c, p, t, or g: ";
        cin.get(ch);
    }

    switch(ch)
    {
        case 'c':
            break;
        case 'p':
            break;
        case 't':
            cout << "A maple is a tree." << endl;
            break;
        case 'g':
            break;
    }

    return 0;
}

void showmenu()
{
    cout << "Please enter one of the following choices: " << endl;
    cout << "c) carnivore\t\t p) pianist" << endl;
    cout << "t） tree\t\t g) game" << endl;

}