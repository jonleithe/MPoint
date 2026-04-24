#include <iostream>
#include <iomanip>

#include <stdio.h>


class MPoint{

    private:
        //int     x_int, y_int;
        struct  point{
            float x, y;
        };

        point* p;
        
        //float   x, y;
     
    public:
        MPoint(int _x, int _y);
        MPoint(float _x, float _y);
        MPoint(double _x, double _y);
        ~MPoint();

        float   get_x(void);
        float   get_y(void);

        //float   move_point_absolute(float _new_x, float _new_y);
};