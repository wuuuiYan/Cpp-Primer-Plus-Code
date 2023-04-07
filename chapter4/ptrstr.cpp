#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char animal[20] = "bear";
    //animal = "cat";左右两边类型不一致无法赋值，只有在初始化时才可以使用赋值运算符
    const char * bird = "wren";
    //可以指向不同的对象，但不能通过对指针应用解除引用运算符来修改其所指向的值
    char * ps;//再没有赋值之前，可以理解为指针无所指向

    cout << animal << " and " << bird << endl;
    //cout << ps << endl;//无所指向前会输出乱码

    cout << "Enter a kind of animal: ";
    //cin >> ps;//ps无所指向，因此没有存放内容的地址，输出会产生段错误
    //cout << ps << endl;
    //cin >> bird;
    //cout << bird << endl;//报错原因见const定义
    cin >> animal;
    cout << animal << endl;

    ps = animal;
    cout << ps << endl;

    cout << animal << " at " << (int *)animal << endl;
    cout << ps << " at " << (int *)ps << endl;

    cout << "After using strcpy\n";
    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);//第二个是从哪来，第一个是到哪去
    cout << animal << " at " << (int *)animal << endl;
    cout << ps << " at " << (int *)ps << endl;
    delete []ps;

    return 0;
}
