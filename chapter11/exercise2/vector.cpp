#include <iostream>
#include "vector.h"
#include <cmath>

//名称空间是开放的
namespace VECTOR
{
    const double Rad_to_deg = 45.0 / atan(1.0);
    /*
    void Vector::set_mag()
    {
        mag = sqrt(x * x + y * y);
    }

    void Vector::set_ang()
    {
        if (x == 0.0 && y == 0.0)
            ang = 0.0;
        else
            ang = atan2(y, x); //计算结果为弧度制
    }
    */

    void Vector::set_x(double mag, double ang)
    {
        x = mag * cos(ang);
    }

    void Vector::set_y(double mag, double ang)
    {
        y = mag * sin(ang);
    }

    Vector::Vector()
    {
        x = y  = 0.0;
        mode = RECT;
    } 

    Vector::Vector(double n1, double n2, Mode form)
    {
        mode = form;

        //同时初始化两种表达方式
        if (form == RECT)
        {
            x = n1;
            y = n2;
            //set_mag();
            //set_ang();
        }
        else if (form == POL)
        {
            //mag = n1;
            //ang = n2 / Rad_to_deg;
            set_x(n1, n2 / Rad_to_deg);
            set_y(n1, n2 / Rad_to_deg);
        }
        else
        {
            cout << "Error" << endl;
            x = y = 0.0;
            mode = RECT;
        }
            
    }

    void Vector::reset(double n1, double n2, Mode form)
    {
        mode = form;

        if (form == RECT)
        {
            x = n1;
            y = n2;
            //set_mag();
            //set_ang();
        }
        else if (form == POL)
        {
            //mag = n1;
            //ang = n2 / Rad_to_deg;
            set_x(n1, n2 / Rad_to_deg);
            set_y(n1, n2 / Rad_to_deg);
        }
        else
        {
            cout << "Error" << endl;
            x = y = 0.0;
            mode = RECT;
        }
    }

    double Vector::magval() const
    {
        return sqrt(x * x + y * y);
    }

    double Vector::angval() const
    {
        if (x == 0.0 && y == 0.0)
            return 0.0;
        else
            return atan2(y, x);
    }

    void Vector::polar_mode()
    {
        mode = POL;
    }

    void Vector::rect_mode()
    {
        mode = RECT;
    }

    Vector Vector::operator+(const Vector &b) const
    {
        return Vector(x + b.x, y + b.y);
        //调用有参构造函数
    }

    Vector Vector::operator-(const Vector &b) const
    {
        return Vector(x - b.x, y - b.y);
    }

    Vector Vector::operator-() const
    {
        return Vector(-x, -y);
    }

    Vector Vector::operator*(double n) const
    {
        return Vector(n * x, n * y);
    }

    Vector operator*(double n, const Vector &a)
    {
        return a * n; //调用成员函数重载的运算符
    }

    //友元函数是非成员函数，不在类作用域中，但在VECTOR名称空间中
    ostream &operator<<(ostream &os, const Vector &v)
    {

        if (v.mode == Vector::RECT)
            os << "x, y = " << v.x << ", " << v.y << endl;
        else if (v.mode == Vector::POL) 
            os << "mag, ang = " << v.magval() << ", " << v.angval() << endl;
        else
            os << "Invalid mode" << endl;

        return os;
    } 
}