
#include <iostream>

#include <math.h>
#include <stdio.h>

#include "inc/point.h"


int main(int argc, char* argv[])
{
    MPoint* p = new MPoint(M_PI, 2 * M_PI);

    
    std::cout << "x = " << p->get_x() << std::endl;
    std::cout << "y = " << p->get_y() << std::endl;
    
    delete p;
}