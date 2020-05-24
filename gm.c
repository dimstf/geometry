#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include "func.c"
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
	printf("Circle with central point (%f;%f) and radius %f",figure[r][0],figure[r][1],figure[r][2]);
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
