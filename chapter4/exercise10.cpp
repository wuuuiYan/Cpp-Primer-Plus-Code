#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<float, 3> record_list;
    cout << "Please enter three records of 40 meters: " << endl;
    cout << "First record: ";
    cin >> record_list[0];//同样可以使用下标索引的方式访问array中的元素 
    
    cout << "Second record: ";
    cin >> record_list[1];

    cout << "Third record: ";
    cin >> record_list[2];

    cout << "1st: " << record_list[0] << endl;
    cout << "2nd: " << record_list[1] << endl;
    cout << "3th: " << record_list[2] << endl;

    cout << (record_list[0] + record_list[1] + record_list[2]) / 3 << endl;

    return 0;
}
