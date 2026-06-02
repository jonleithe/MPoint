// Add include guards to prevent multiple inclusions of the header file
#pragma once

// ─── Include section ─────────────────────────────────────────────────────────
#include <iomanip>
#include <iostream>

#include <stdio.h>
// ─── END OF Include section ──────────────────────────────────────────────────



// ─── MPoint class definition ─────────────────────────────────────────────────
class MPoint{

    private:
        double  x;
        double  y;

    public:
        MPoint(double _x = 0, double _y = 0);

        double  get_x(void) {return x;}
        double  get_y(void) {return y;}

};
// ─── END OF MPoint class definition ──────────────────────────────────────────
