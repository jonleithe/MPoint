

#include "../inc/point.h"


/*
MPoint::MPoint(int x, int y)
{
    x_int = x;
    y_int = y;
}
*/



MPoint::MPoint(int _x, int _y)
{
    p       = new point;
    p->x    = static_cast<float>(_x);
    p->y    = static_cast<float>(_y);
}



MPoint::MPoint(float _x, float _y)
{
    p       = new point;
    p->x    = _x;
    p->y    = _y;
}



MPoint::MPoint(double _x, double _y)
{
    p       = new point;
    p->x    = static_cast<float>(_x);
    p->y    = static_cast<float>(_y);
}



MPoint::~MPoint()
{
    delete p;
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