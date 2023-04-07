#ifndef __VECTOR_H__
#define __VECTOR_H__

#include <iostream>

using namespace std;

namespace VECTOR
{
    class Vector
    {
        public:
            enum Mode
            {
                RECT,
                POL
            }; //把符号常量替换为对应的值，RECT=0，POL=1
        private:
            double x;
            double y;
            double mag;
            double ang;
            Mode mode; //选择表达方式
            void set_mag();
            void set_ang();
            void set_x();
            void set_y();
        public:
            Vector();
            Vector(double n1, double n2, Mode form = RECT);
            void reset(double n1, double n2, Mode form = RECT);
            double xval() const { return x; };
            double yval() const { return y; };
            double magval() const { return mag; }
            double angval() const { return ang; }
            void polar_mode();
            void rect_mode();

            Vector operator+(const Vector &b) const;
            Vector operator-(const Vector &b) const;
            Vector operator-() const; //运算符的第二次重载
            Vector operator*(double n) const;

            //关键字friend不在函数定义中出现，但是const需要在函数定义中出现
            friend Vector operator*(double n, const Vector &a);
            friend ostream &operator<<(ostream &os, const Vector &v);

            //operator double() { return mag; } //内联函数
    };
}//末尾无分号

#endif