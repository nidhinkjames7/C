#include<stdio.h>
void largesmall(int);
int a[10];
void main()
{
	int n,i;
	printf("enter the size of the array\n");
	scanf("%d",&n);
	printf("enter the values\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	largesmall(n);
}
void largesmall(int n)
{
	int f,i,small=a[1],large=a[1];
	for(i=1;i<=n;i++)
	{
		if(a[i]<=small)
		{
			small=a[i];
		}
		if(a[i]>=large)
		{	
			large=a[i];
		}

	}
	printf("smallest is %d\n",small);
	printf("largest is %d\n",large);
}

