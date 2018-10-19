#include<stdio.h>
void main()
{
	int num,d,s=0,x; 
	printf("enter a number \n");
	scanf("%d",&num);
	x=num;
	do
	{
		d=num%10;
		s=s+d;
		num=num/10;
	}  while(num>0);
	printf(" The total sum of %d is = %d",x,s);
}
 
