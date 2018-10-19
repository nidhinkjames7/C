#include<stdio.h>
void main()
{
	int i,j,n;
	char *s[10],*temp;
	printf("enter the limi\n");
	scanf("%d",&n);
	printf("enter the names\n");
	for(i=0;i<n;i++)
	{
		scanf("%s",&s[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(&s[i],&s[j])>0)
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",&s[i]);
	}
}
			
