#include "ctest.h"
#include <stdio.h>
#include <stdlib.h>
extern float
check(float* x1, float* y1, float* x2, float* y2, float* r1, float* r2);
int main()
{
    float a1 = 0, a2 = 0, rad1 = 1, b1 = 1, b2 = 1, rad2 = 2;
    float res;
    res = check(&a1, &a2, &b1, &b2, &rad1, &rad2);
    ASSERT_EQUAL_FLOAT(res, 1.0);
    return 0;
}
