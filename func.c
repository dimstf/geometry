#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "macr.h"
float ccheck(float* x1,float* y1,float* x2,float* y2,float* r1,float* r2)
{
	float f;
	f=sqrtf(((*x1)-(*x2))*((*x1)-(*x2))+((*y1)-(*y2))*((*y1)-(*y2)));
	if(((*r1)-(*r2)<f)&&(f<(*r1)+(*r2))) printf("Circles (%f:%f) with radius %f and (%f:%f) with radius %f are crossing\n",*x1,*y1,*r1,*x2,*y2,*r2);
	else printf("Circles (%f:%f) with radius %f and (%f:%f) with radius %f are NOT crossing\n",*x1,*y1,*r1,*x2,*y2,*r2);
	return 0;
}
