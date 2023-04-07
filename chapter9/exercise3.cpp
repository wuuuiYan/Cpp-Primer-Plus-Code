#include <iostream>
#include <new>
#include <cstring>

using namespace std;

const int BUFF = 512;

struct chaff
{
    char dross[20];
    int slag;
};

char buffer[BUFF]; //开辟静态内存

void show(const chaff &p);

int main()
{
    chaff *pd1 = new chaff[2];
    chaff *pd2 = new (buffer) chaff[2];

    char dross[20];
    int slag;

    for (int i = 0; i < 2; i ++)
    {
        cout << "#" << i + 1 << ": " << endl;
        cout << "Enter the dross: ";
        cin.getline(dross, 20);
        cout << "Enter the slag: ";
        cin >> slag;
        cin.get();

        strcpy(pd1[i].dross, dross);
        strcpy(pd2[i].dross, dross);

        pd1[i].slag = pd2[i].slag = slag;
    }

    for (int i = 0; i < 2; i++)
    {
        show(pd1[i]);
        show(pd2[i]);
    }

    delete[] pd1;

    return 0;
}

//传递的参数是结构体对象
void show(const chaff &p)
{
    cout << "The dross is: " << p.dross << endl;
    cout << "The slag is: " << p.slag << endl;
}