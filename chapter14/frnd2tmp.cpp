#include <iostream>

using namespace std;

template<class T>
class HasFriend
{
    private:
        T item;
        static int ct;
    public:
        HasFriend(const T &i) : item(i) {ct++;}
        ~HasFriend() {ct--;}
        friend void counts(); //display ct
        friend void reports(HasFriend<T> &); //display item
};

template<class T>
int HasFriend<T>::ct = 0;

void counts()
{
    cout << "int count: " << HasFriend<int>::ct << ", ";
    cout << "double count: " << HasFriend<double>::ct << endl;
    //类模板的示实例化
}

//reports不是模板函数，因此不能传递泛型作为参数，必须指定具体的类型构成函数重载
void reports(HasFriend<int> &hf)
{
    cout << "HasFriend<int> item: " << hf.item << endl;
}

void reports(HasFriend<double> &hf)
{
    cout << "HasFriend<double> item: " << hf.item << endl;
}

int main()
{
    cout << "No object declared: ";
    counts(); //调用友元函数时不需要类的对象

    HasFriend<int> hfi1(10);
    cout << "After hfi1 declared: ";
    counts();
    reports(hfi1);

    HasFriend<int> hfi2(20);
    cout << "After hfi2 declared: ";
    counts();
    reports(hfi2);
    //hfi1与hfi2同为HasFriend<int>类，共用一个静态数据

    HasFriend<double> hfdb(0.5);
    cout << "After hfdb declared: ";
    counts();
    reports(hfdb); 

    return 0;
}