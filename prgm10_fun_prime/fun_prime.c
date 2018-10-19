#include<stdio.h>
int prime(int);
void main()
{
	int n,f;
	printf("enter a number \n");
	scanf("%d",&n);
	f=prime(n);
	if(f==1)
	{
		printf("\n%d is not prime\n",n);
	}
	else
	{
		printf("\n%d  is prime\n",n);
	}
}
int prime(int n)
{
	int i,f=0;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			f=1;
		}
	}
	return f;
}
