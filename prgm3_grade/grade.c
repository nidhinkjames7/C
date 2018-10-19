#include<stdio.h>
void main()
{	
	int m1,m2,m3,mark,avg;
	printf("enter marks of three subject\n");
	scanf("%d %d %d",&m1,&m2,&m3);
	mark=m1+m2+m3;
	avg=mark/3;
	printf("\nThe Total mark is %d\n",mark);
	printf(" \nThe average is %d\n",avg);
	if(avg>90)
	{
		printf(" A+ grade");
	}
	else if((avg>80)&&(avg<=89))
	{
		printf(" A grade\n");
	}
	else if((avg>70)&&(avg<=79))
	{
		printf(" B+ grade\n");
	}
	else if((avg>60)&&(avg<=69))
	{
		printf(" B grade\n");
	}
	else if((avg>50)&&(avg<=59))
	{
		printf(" C+ grade\n");	
	}
	else if((avg>40)&&(avg<=49))
	{
		printf(" C grade\n");
	}
	else if((avg>35)&&(avg<=39))
	{
		printf(" D+ grade\n");
	}
	else
	{
		printf(" failed \n");
	}
}

