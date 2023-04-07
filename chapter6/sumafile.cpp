#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

const int SIZE = 60;

int main()
{
    char filename[SIZE];
    ifstream inFile;
    double value;
    double sum = 0.0;
    int count = 0;

    cout << "Enter name of data file: ";
    cin.getline(filename, SIZE);

    inFile.open(filename); //���ļ�������ϵ
    if (!(inFile.is_open()))
    {
        cout << "Could not open the file" << filename << endl;
        cout << "Program terminating" << endl;
        exit(EXIT_FAILURE);
    }
    cout << "Suceess open the txt file." << endl;

    inFile >> value;
    while (inFile.good())
    {
        ++count;
        //cout << count << endl;
        sum += value;
        //cout << sum << endl;
        inFile >> value;
        //cout << value << endl;
    }

    if (inFile.eof())
    {
        cout << "End of file reached" << endl; //���������ļ�ĩβ����
    }
    else if (inFile.fail())
    {
        cout << "Input terminated by data mismatched." << endl; //���Ͳ�ƥ�䵼�¶������
    }
    else
    {
        cout << "Input terminated by unknown reason." << endl; //δ֪ԭ���¶������
    }

    if (count == 0)
    {
        cout << "No data processed." << endl;
    }
    else 
    {
        cout << "Items read: " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / count << endl;
    }
    //��VSCode�����£��ı��ļ������һ�����ݱ���ӿո񣬷�����ȡʧ��

    inFile.close();

    return 0;
}