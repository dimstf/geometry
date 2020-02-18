#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#define CSQ(a) (3.14*a*a)
#define CPL(b) (6.28*b)
float ccheck(float* x1,float* y1,float* x2,float* y2,float* r1,float* r2)
{
	float f;
	f=sqrtf(((*x1)-(*x2))*((*x1)-(*x2))+((*y1)-(*y2))*((*y1)-(*y2)));
	if(((*r1)-(*r2)<f)&&(f<(*r1)+(*r2))) printf("Circles (%f:%f) with radius %f and (%f:%f) with radius %f are crossing\n",*x1,*y1,*r1,*x2,*y2,*r2);
	else printf("Circles (%f:%f) with radius %f and (%f:%f) with radius %f are NOT crossing\n",*x1,*y1,*r1,*x2,*y2,*r2);
}
int main()
{
	int n,t,k,r;
	printf("Input number of figures: ");	
	scanf("%d",&n);
	r=0;
	t=2*n;
	float figure[t][3];
	for(k=n;k>0;k--){
	printf("Circle\n");
	printf("Center point is ");
	scanf("%f",&figure[r][0]);
	scanf("%f",&figure[r][1]);			
	printf("\n");
	printf("Radius  ");
	scanf("%f",&figure[r][2]);	
	printf("\n");
	printf("Square is %f",CSQ(figure[r][2]));
	printf("\n");
	printf("Perimeter is %f",CPL(figure[r][2]));			
	printf("\n");	
	r++;
	}
	r=0;
	for(k=0;k<n;k++){
		for(t=k;t<n-1;t++)
		ccheck(&figure[t][0],&figure[t][1],&figure[t+1][0],&figure[t+1][1],&figure[t][2],&figure[t+1][2]);
	}
	return 0;
}
