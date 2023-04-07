#include <iostream>

using namespace std;

const int Max = 5;

int fill_array(double arr[], int limit);
void show_array(const double arr[], int n);
void revalue(double r, double arr[], int n);

int main()
{
    double properties[Max];

    int size = fill_array(properties, Max);
    show_array(properties, size);

    if (size > 0)
    {
        double factor;

        cout << "Enter revaluation factor: ";
        while (!(cin >> factor))
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input: input process terminated." << endl;
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }

    return 0;
}

int fill_array(double arr[], int limit)
{
    double temp;
    int i;

    for (i = 0; i < limit; i ++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input: input process terminated." << endl;
        }
        else if (temp < 0)
            break;
        else
            arr[i] = temp;
    }
    return i;
}

//形参前面的修饰符const表示不可通过该指针修改指向的对象
void show_array(const double arr[], int n)
{
    for (int i = 0; i < n; i ++)
    {
        cout << "Properties # " << (i + 1) << ": $";
        cout << arr[i] << endl;
    }
}

void revalue(double r, double arr[], int n)
{
    for (int i = 0; i < n; i ++)
    {
        arr[i] *= r;
    }
}