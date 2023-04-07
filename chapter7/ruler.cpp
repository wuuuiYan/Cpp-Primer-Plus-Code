#include <iostream>

using namespace std;

const int Len = 66; //2^6 + 2 = 66
const int Divs = 6;

void subdivide(char arr[], int low, int high, int levels);

int main()
{
    char ruler[Len];

    for (int i = 0; i < Len; i ++)
        ruler[i] = ' ';

    int min = 0;
    int max = Len - 2;
    ruler[Len - 1] = '\0'; //һ��Ҫ�޶���β
    ruler[min] = ruler[max] = '|';
    cout << ruler << endl;

    for (int i = 1; i <= Divs; i ++)
    {
        subdivide(ruler, min, max, i);
        cout << ruler << endl;
    }
    
    return 0;
}

//ͨ������levels���Ƶݹ�Ĵ���
void subdivide(char arr[], int low, int high, int levels)
{
    if (levels == 0)
        return;
    
    int mid = (low + high) / 2;
    arr[mid] = '|';

    subdivide(arr, low, mid, levels - 1);
    subdivide(arr, mid, high, levels - 1);
}