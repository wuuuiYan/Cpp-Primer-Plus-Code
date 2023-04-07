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

    inFile.open(filename); //与文件建立联系
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
        cout << "End of file reached" << endl; //正常读到文件末尾结束
    }
    else if (inFile.fail())
    {
        cout << "Input terminated by data mismatched." << endl; //类型不匹配导致读入结束
    }
    else
    {
        cout << "Input terminated by unknown reason." << endl; //未知原因导致读入结束
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
    //在VSCode环境下，文本文件的最后一个数据必须加空格，否则会读取失败

    inFile.close();

    return 0;
}