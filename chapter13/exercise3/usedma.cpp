#include "dma.h"
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    baseDMA shirt("Protabelly", 8);
    cout << "Displaying baseDMA object: " << endl;
    cout << shirt;
    cout << "-------------------" << endl;

    lacksDMA ballon("Blimpo", 4, "red");
    cout << "Displaying lacksDMA object: " << endl;
    cout << ballon;
    cout << "-------------------" << endl;

    lacksDMA ballon2(ballon);
    cout << "Result of lacksDMA copy: " << endl;
    cout << ballon2;
    cout << "-------------------" << endl;

    hasDMA map("Keys", 5, "Mercator");
    cout << "Displaying hasDMA object: " << endl;
    cout << map;
    cout << "-------------------" << endl;

    hasDMA map2 = map; //��������Ķ���ĳ�ʼ���������ø��ƹ��캯��
    cout << "Result of hasDMA copy: " << endl;
    cout << map2;
    cout << "-------------------" << endl;

    hasDMA map3;
    map3 = map; //�����������ĸ�ֵ�����������صĸ�ֵ�����
    cout << "Result of hasDMA copy: " << endl;
    cout << map3;
    cout << "-------------------" << endl;

    return 0;
}