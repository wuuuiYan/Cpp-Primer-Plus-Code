#include <iostream>
#include "vector.h"
#include <cstdlib>
#include <ctime>
#include <fstream> //文件输入输出流

using namespace std;
using namespace VECTOR;

int main()
{
    double target, dstep, direction;
    Vector result(0.0, 0.0);
    Vector step;
    unsigned long steps = 0;

    ofstream fout;
    fout.open("randwalk.txt");

    srand(time(NULL));

    cout << "Enter target distance(q to quit): ";
    while (cin >> target)
    {
        cout << "Enter the step length: ";
        if (!(cin >> dstep))
            break;

        fout << "Target distance: " << target << ", step size: " << dstep << endl;

        while (result.magval() < target)
        {
            fout << steps << ": (x, y) = " << result << endl;
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            //为什么将枚举常量设置为public的原因
            result = result + step;
            steps++;
        }

        cout << "After " << steps << " steps, the subject has the following location: " << endl;
        cout << result;
        result.polar_mode(); //只是修改了状态成员变量
        cout << result;

        fout << "After " << steps << " steps, the subject has the following location: " << endl;
        result.rect_mode();
        fout << result;
        result.polar_mode();
        fout << result;

        fout << "Average outward distance per step = " << result.magval() / steps << endl;

        cout << endl;

        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance(q to quit): ";
    }

    cout << "ByeBye" << endl;

    return 0;
}