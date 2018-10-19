#include<stdio.h>
struct sample
{
	unsigned int a:3;
	unsigned int b:2;
}e;
void main()
{
	int c;
	e.a=4;
	e.b=1;
	printf("%d\t",e.a);
	printf("%d\t",e.b);
	c=e.a+e.b;
	printf("sum=%d\n",c);
	c=e.a-e.b;
	printf("difference=%d\n",c);
	c=e.a*e.b;
	printf("product=%d\n",c);
}

