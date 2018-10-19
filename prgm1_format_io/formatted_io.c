#include<stdio.h>
void main()
{
	int a,b,c,w,p;
	float x;
	double y;
	char str[20];
	printf("***FORMATTED INPUT & OUTPUT***\n");
	printf("enter three integers \n");
	scanf("%d%*d%d",&a,&b);
	printf("value of a is %d\n value of b is %d\n",a,b);
	printf("enter a 4 digit number\n");
	scanf("%4d",&c);
	printf("%6d\n",c);
	printf("%2d\n",c);
	printf("%-6d\n",c);
	printf("%06d\n",c);
	printf("enter 2 floating point number\n");
	scanf("%f%f",&x,&y);
	printf("enter the field width\n");
	scanf("%d",&w);
	printf("enter the precision \n");
	scanf("%d",&p);
	printf("%*.*f\n",w,p,x);
	printf("%e\n",x);
	printf("%-7.2f\n",y);
	printf("%10.2e\n",y);
	printf("enter a string\n");
	scanf("%s",str);
	printf("%20s\n",str);
	printf("%30.10s\n",str);
	printf("%.5s\n",str);
	printf("%-20s\n",str);
	printf("%5s\n",str);
}
	
