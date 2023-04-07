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
            }; //�ѷ��ų����滻Ϊ��Ӧ��ֵ��RECT=0��POL=1
        private:
            double x;
            double y;
            double mag;
            double ang;
            Mode mode; //ѡ����﷽ʽ
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
            Vector operator-() const; //������ĵڶ�������
            Vector operator*(double n) const;

            //�ؼ���friend���ں��������г��֣�����const��Ҫ�ں��������г���
            friend Vector operator*(double n, const Vector &a);
            friend ostream &operator<<(ostream &os, const Vector &v);

            operator double() { return mag; } //��������
    };
}//ĩβ�޷ֺ�

#endif