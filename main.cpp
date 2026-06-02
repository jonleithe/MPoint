
#include <iostream>

#include <math.h>
#include <stdio.h>

#include "inc/point.h"


int main(int argc, char* argv[])
{
    MPoint p(1.431415, 1.398764);

    printf("x: %f\n", p.get_x());
    printf("y: %f\n", p.get_y());

    return 0;
}
