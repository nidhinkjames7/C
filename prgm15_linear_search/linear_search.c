#include<stdio.h>
void search(int);
int a[20];
void main()
{
	int n,i;
	printf("Enter the limmit of the array\n");
	scanf("%d",&n);
	printf("enter the elements of the array\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	search(n);
}
void search(int n)
{
	int s,i,flag=1;
	printf("enter the item to be searched\n");
	scanf("%d",&s);
	for(i=1;i<=n;i++)
	{
		if(s==a[i])
		{
			flag=1;
			printf("the item found at %d  and item is %d\n",i,s);
		}
	}
	if(flag!=1)
	{
		printf("item not found\n");
	}
}
