#include "macr.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
float check(float* x1, float* y1, float* x2, float* y2, float* r1, float* r2)
{
    float f, indicator;
    f
            = sqrtf(((*x1) - (*x2)) * ((*x1) - (*x2))
                    + ((*y1) - (*y2)) * ((*y1) - (*y2)));
    if (((*r1) - (*r2) <= f) && (f <= (*r1) + (*r2))) {
        printf("Circles (%f:%f) with radius %f ", *x1, *y1, *r1);
        printf("and (%f:%f) with radius %f are CROSSING\n", *x2, *y2, *r2);
        indicator = 1.0;
    } else {
        printf("Circles (%f:%f) with radius %f ", *x1, *y1, *r1);
        printf("and (%f:%f) with radius %f are NOT CROSSING\n", *x2, *y2, *r2);
        indicator = 2.0;
    }
    return indicator;
}
