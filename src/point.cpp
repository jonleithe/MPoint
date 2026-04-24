

#include "../inc/point.h"


/*
MPoint::MPoint(int x, int y)
{
    x_int = x;
    y_int = y;
}
*/



MPoint::MPoint(float _x = 0, float _y = 0)
{
    p = new point;
    p->x = _x;
    p->y = _y;
}


/*
int MPoint::get_x(void)
{
    return x_int;
}



int MPoint::get_y(void)
{
    return y_int;
}
*/


float MPoint::get_x(void)
{
    return p->x;
}



float MPoint::get_y(void)
{
    return p->y;
}