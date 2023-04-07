#include <iostream> //ostream->cout istream->cin
#include <fstream> //1.包含头文件
//ofstream ifstream

using namespace std;

int main()
{
    char automobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outFile; //2.创建一个文件输出流的对象
                      
    outFile.open("carinformation.txt"); //3.调用该对象的open方法将对象与指定文件关联起来

    cout << "Please enter the make and model of automobile: ";
    cin.getline(automobile, 50);
    
    cout << "Enter the model year: ";
    cin >> year;

    cout << "Enter the original asking price: ";
    cin >> a_price;
    d_price = 0.913 * a_price;

    //输出到屏幕
    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "Make and model: " << automobile << endl;
    cout << "Year: " << year << endl;
    cout << "Was asking: " << a_price << endl;
    cout << "Now asking: " << d_price << endl;

    //输出到文件,会覆盖之前的内容而不是在原来内容的末尾追加 
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