#include<stdio.h>
void swap(int *,int *);
int a,b;
void main()
{
	printf("enter two values\n");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
}
void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
	printf("\n using call by reference:\nThe swapped values are:\n%d\t%d",*a,*b);
}
 
