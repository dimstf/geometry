#include <stdlib.h>
#include <stdio.h>
#include "ctest.h"
#include "func.c"
int main()
{
	float a1=0,a2=0,rad1=1,b1=1,b2=1,rad2=2
	float res,real=;
	res=check(&a1,&a2,&b1,&b2,&rad1,&rad2);
	ASSERT_EQUAL_FLOAT(res,1.0);
	return 0;
}
