#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#define CSQ(a) (3.14*a*a)
#define CPL(b) (6.28*b)
int ccheck(float* x1,float* y1,float* x2,float* y2,float* r1,float* r2)
{
	float f;
	f=sqrtf(((*x1)-(*x2))*((*x1)-(*x2))+((*y1)-(*y2))*((*y1)-(*y2)));
	if(((*r1)-(*r2)<f)&&(f<(*r1)+(*r2))) printf("Circles (%f:%f) with radius %f and (%f:%f) with radius %f are crossing\n",*x1,*y1,*r1,*x2,*y2,*r2);
	printf("Done\n");
}
int main()
{
	float figure[4][2];
	printf("First circle\n");
	printf("Center point is ");
	scanf("%f",&figure[0][0]);
	scanf("%f",&figure[0][1]);			
	printf("\n");
	printf("Radius  ");
	scanf("%f",&figure[1][1]);	
	printf("\n");
	printf("Square is %f",CSQ(figure[1][1]));
	printf("\n");
	printf("Perimeter is %f",CPL(figure[1][1]));			
	printf("\n");
	printf("Second circle\n");
	printf("Center point is ");
	scanf("%f",&figure[2][0]);
	scanf("%f",&figure[2][1]);			
	printf("\n");
	printf("Radius  ");
	scanf("%f",&figure[3][1]);	
	printf("\n");	
	printf("Square is %f",CSQ(figure[3][1]));
	printf("\n");
	printf("Perimeter is %f\n",CPL(figure[3][1]));	
	ccheck(&figure[0][0],&figure[0][1],&figure[2][0],&figure[2][1],&figure[1][1],&figure[3][1]);
	return 0;
}
