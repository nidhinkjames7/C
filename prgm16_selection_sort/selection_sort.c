#include<stdio.h>
void main()
{
	int a[20],i,j,t,n;
	printf("enter the limit\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("sorted list\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}

