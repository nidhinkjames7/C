#include<stdio.h>
#include<math.h>
void main()
{
	int n,a,i;
	float s;
	printf("enter the limit\n");
	scanf("%d",&n);
	printf("enter the number \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(a==9999)
		{
			break;
		}
		if(a<0)
		{
			continue;
		}
		s=sqrt(a);
		printf("square root of %d is %f \n",a,s);
	}
}
