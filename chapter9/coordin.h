#ifndef __COORDIN_H__  
//防止多次调用头文件时，其中的函数被多次声明
#define __COORDIN_H__

struct polar
{
    double distance;
    double angle;
};

struct rect
{
    double x;
    double y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

#endif