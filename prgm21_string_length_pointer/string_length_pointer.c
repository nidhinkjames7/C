#include<stdio.h>
#include<string.h>
void main()
{
	char str[10];
	char *cp;
	int count=0,i;
	printf("enter the string \n");
	scanf("%s",str);
	cp=str;
	printf("string is %s",cp);
	for(i=0;*(cp+i)!='\0';i++)
	{
		count++;
	}
	printf("\nthe length of the string is %d \n",count);
}

