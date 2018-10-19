#include<stdio.h>
void main()
{
	int a[20],n,i,j,t;
	printf("enter the limit \n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("elements in sorted order: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}

