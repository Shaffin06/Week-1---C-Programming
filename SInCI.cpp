/*simple and Compound Interest*/
#include <stdio.h>
#include <math.h>
int main()
{
	int p,n,r;
	float x;
	scanf("%d%d%d",&p,&n,&r);
	x=pow((1+r/100),n);
	printf("Simple Interest = %d \n Compound Interest = %f", p*n*r/100, p*x);
	return 0;
}
