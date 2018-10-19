#include<stdio.h>
void sumavg(int);
int a[20];
void main()
{
	int n,i;
	printf("Enter the limit of the array\n");
	scanf("%d",&n);
	printf("Enter the values to the array\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	sumavg(n);
}
void sumavg(int n)
{
	int i;
	float avg;
	int sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("the sum is %d \t average is %f\n",sum,avg);
} 
