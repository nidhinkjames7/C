#include<stdio.h>
void main()
{
	int a,b,c,*p1,**p2,*q1,**q2;
	p1=&a;
	p2=&p1;
	q1=&b;
	q2=&q1;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	c=**p2 + **q2;
	printf("sum=%d\n",c);
	c=**p2 - **q2;
	printf("difference=%d\n",c);
	c=**p2 * **q2;
	printf("product=%d\n",c);
	c=**p2 / **q2;
	printf("division=%d\n",c);
}

