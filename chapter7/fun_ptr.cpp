#include <iostream>

using namespace std;

double Rick(int lines);
double Jack(int lines);
void estimate(int lines, double (*pf)(int));

int main()
{
    int code;

    cout << "How mant lines of code do you need? ";
    cin >> code;

    cout << "Here is Rick's estimate: " << endl;
    estimate(code, Rick);

    cout << "Here is Jack's estimate: " << endl;
    estimate(code, Jack);

    return 0;
}

double Rick(int lines)
{
    return lines * 0.05;
}

double Jack(int lines)
{
    return 0.03 * lines + 0.0004 * lines * lines;
}

void estimate(int lines, double (*pf)(int))
{
    cout << lines << " lines code will take " << (*pf)(lines) << " seconds." << endl;

}