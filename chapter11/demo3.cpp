#include <iostream>

using namespace std;

class Num
{
    public:
        int n;
    public:
        Num();
        Num(int m);
        //Num operator+(const Num &t) const;
        //void Show() const;
        void operator=(int l);
};

Num::Num()
{
    n = 0;
    cout << "Hello world!" << endl;
    //����������������Ϊ����ʽ��֤���ú����������ˣ���ͬ 
}

Num::Num(int m)
{
    n = m;
    cout << "Good morning!" << endl;
}

void Num::operator=(int l)
{
    n = l;
    cout << "I love you, Rick!" << endl;
}

int main()
{
    Num a;
    a = 10; //�������û��Զ���Ĺ��캯�����ȼ��ڣ�a(10)
    //������û�жԸ�ֵ�������������ʱ���������Ҳ�����������캯�����β�
    //��˲����÷ǳ�Ա�����Ը�ֵ��������أ��������빹�캯���γɳ�ͻ���������ᱨ��
    //�������г�Ա�����Ը�ֵ�������������ʱ����������ȵ������ص������

    return 0;
}