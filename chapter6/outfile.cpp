#include <iostream> //ostream->cout istream->cin
#include <fstream> //1.����ͷ�ļ�
//ofstream ifstream

using namespace std;

int main()
{
    char automobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outFile; //2.����һ���ļ�������Ķ���
                      
    outFile.open("carinformation.txt"); //3.���øö����open������������ָ���ļ���������

    cout << "Please enter the make and model of automobile: ";
    cin.getline(automobile, 50);
    
    cout << "Enter the model year: ";
    cin >> year;

    cout << "Enter the original asking price: ";
    cin >> a_price;
    d_price = 0.913 * a_price;

    //�������Ļ
    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "Make and model: " << automobile << endl;
    cout << "Year: " << year << endl;
    cout << "Was asking: " << a_price << endl;
    cout << "Now asking: " << d_price << endl;

    //������ļ�,�Ḳ��֮ǰ�����ݶ�������ԭ�����ݵ�ĩβ׷�� 
    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "Make and model: " << automobile << endl;
    outFile << "Year: " << year << endl;
    outFile << "Was asking: " << a_price << endl;
    outFile << "Now asking: " << d_price << endl;

    outFile.close(); 

    return 0;
}