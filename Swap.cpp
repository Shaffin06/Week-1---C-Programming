/*Swap 2 Numbers*/
#include <stdio.h>
int main()
{
	int a,b,t;
	scanf("%d %d",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("a is %d and b is %d",a,b);
	return 0;
}
