#include <iostream>
#include "vector.h"
#include <cstdlib>
#include <ctime>

using namespace std;
using namespace VECTOR;

int main()
{
    double target, dstep, direction;
    Vector result(0.0, 0.0);
    Vector step;
    unsigned long steps = 0;
    unsigned int N;
    unsigned int max = 0;
    unsigned int min = 0;
    unsigned int sum = 0;

    srand(time(NULL));

    cout << "How many times do you want to try? ";
    cin >> N;

    cout << "Enter target distance: ";
    cin >> target;
    cout << "Enter the step length: ";
    cin >> dstep;

    for (int i = 0; i < N; i ++)
    {
        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            // 为什么将枚举常量设置为public的原因
            result = result + step;
            steps++;
        }

        /*
        cout << "After " << steps << " steps, the subject has the following location: " << endl;
        cout << result;
        result.polar_mode(); //只是修改了状态成员变量
        cout << result;

        cout << endl;
        */

        max = (max > steps) ? max : steps;
        if (min == 0)
            min = max;
        else
            min = (min < steps) ? min : steps;
        sum += steps;

        steps = 0;
        result.reset(0.0, 0.0);
    }

    cout << "The max steps is: " << max << endl;
    cout << "The min steps is: " << min << endl;
    cout << "The average steps steps is: " << (double)sum / N << endl;
    cout << "ByeBye" << endl;

    return 0;
}