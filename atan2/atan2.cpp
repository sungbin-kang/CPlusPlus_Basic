#include <iostream>
#include <cmath>
// #include "math.h"

using namespace std;

int main()
{
    double x, y;

    x = -10;
    y = 10;
    double degree = atan2 (y,x) * 180 / M_PI;


    printf ("The arc tangent for (x=%f, y=%f) is %f degrees\n", x, y, degree );

    double x1, y1, x2, y2;

    x1 = 1;
    y1 = 1;
    x2 = 3;
    y2 = 3;

    x = x2 - x1;
    y = y2 - y1;
    degree = atan2 (y,x) * 180 / M_PI;
    printf ("The arc tangent for (x=%f, y=%f) is %f degrees\n", x, y, degree );

    x = x1 - x2;
    y = y1 - y2;
    degree = atan2 (y,x)* 180 / M_PI;
    printf ("The arc tangent for (x=%f, y=%f) is %f degrees\n", x, y, degree );


}