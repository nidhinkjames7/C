#include<stdio.h>
void main()
{
	int n,p,i,s=0;
	float avg;
	printf("enter the limit\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p);
		if(p<0)
		{
			goto label;
		}
		s=s+p;
	}
	label:
	avg=(s/(i));
	printf("average=%f",avg);
}

