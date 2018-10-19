#include<stdio.h>
void diagnal(int[10][10],int ,int);
int a[10][10],r,c;
void main()
{
	int i,j;
	printf("enter the row size\n");
	scanf("%d",&r);
	printf("enter the column size\n");
	scanf("%d",&c);
	if(r!=c)
	{
		printf("not possible\n");
	}
	else
	{
		printf("enter the values of the matrix\n");
		for(i=1;i<=r;i++)
		{
			for(j=1;j<=c;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("the matrix is\n");
		for(i=1;i<=r;i++)
		{
			for(j=1;j<=c;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
		diagnal(a,r,c);
	}
}
void diagnal(int a[10][10],int r,int c)
{
	int i,j,sum1=0,sum2=0;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{	
			if(i==j)
			{	
				sum1=sum1+a[i][j];
			}
			if((i+j)==(r+1))
			{
				sum2=sum2+a[i][j];
			}
		}
	}
	printf("the sum of trace or principle diagonal elements is =%d\n",sum1);
	printf("the sum of diagnal elements= %d \n",sum2);
}
