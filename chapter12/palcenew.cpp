#include <iostream>
#include <string>
#include <new>

using namespace std;

const int BUF = 512;

class JustTesting
{
    private:
        string words;
        int number;
    public:
        JustTesting(const string &s = "Just Testing", int n = 0)
        {
            words = s; number = n; cout << words << " constructed\n";
        }
        ~JustTesting(){cout << words << " destroyed\n";}
        void Show() const{cout << words << ", " << number << endl;}
};

int main()
{
    char *buffer = new char[BUF];
    JustTesting *pc1, *pc2;

    pc1 = new(buffer) JustTesting; 
    pc2 = new JustTesting("heap1", 20); //Ϊ��������ڴ�ռ䡢�����Զ��幹�캯��

    cout << "buffer: " << (void *)buffer << endl;
    cout << "heap1: " << pc2 << endl; 

    cout << pc1 << ": ";
    pc1->Show(); //ͨ��ָ����ó�Ա�����ķ�ʽ
    cout << pc2 << ": ";
    pc2->Show();

    JustTesting *pc3, *pc4;
    pc3 = new(buffer + sizeof(JustTesting)) JustTesting("Bad Idea", 6);
    pc4 = new JustTesting("heap2", 10);

    cout << pc3 << ": ";
    pc3->Show(); //ͨ��ָ����ó�Ա�����ķ�ʽ
    cout << pc4 << ": ";
    pc4->Show();

    //deleteֻ������ָ�򳣹�new�����������ڴ棬���������ڶ�λnew�����
    //ʹ��new����������Ķ���ֻ����ʽ����deleteʱ���������Żᱻ����
    delete pc4;
    delete pc2; 

    //��λnew�������û�п����ڴ�ռ䣬ֻ��ָ�����ѷ�����ϵ��ڴ�ռ�
    //delete []buffer;

    //�������������Ч�ģ�����ֻ�ͷ����ڴ�ռ䣬��û�е�����������
    //��˶���pc1��pc3��Ҫ��ʽ�ص�����������������Ϊ�����������
    pc3->~JustTesting();
    pc1->~JustTesting();
    delete []buffer; //��ѭ�ȿ��ٺ��ͷŵ�ԭ��

    return 0;
}