#include <iostream>
#include <string>
#include <memory>

using namespace std;

int main()
{
    unique_ptr<string> films[5] = {
        unique_ptr<string> (new string("Fowl Balls")),
        unique_ptr<string> (new string("Duck Walks")),
        unique_ptr<string> (new string("Chicken Runs")),
        unique_ptr<string> (new string("Turkey Errors")),
        unique_ptr<string> (new string("Goose Eggs"))
    };
    unique_ptr<string> pwin;
    //pwin = films[2]; //unique_ptrִ�и����ϸ������Ȩת��
    cout << "The nominees for best avian baseball film are: \n";
    
    /*
    for(int i = 0; i < 5; i ++)
        cout << *films[i] << endl;
    */

    cout << "The winner is " << *pwin << "!\n";
    cin.get();

    return 0;
}