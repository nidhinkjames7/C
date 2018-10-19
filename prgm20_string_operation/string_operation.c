#include<stdio.h>
#include<string.h>
void main()
{	
	char s1[25],s2[25];
	int len,i,j,eq;
	printf("enter the string\n");
	scanf("%s",s1);
	len=strlen(s1);
	printf("the length of the string %s is %d\n",s1,len);
	printf("enter the first string \n");
	scanf("%s",s1);
	printf("enter the second string \n");
	scanf("%s",s2);
	for(i=0;s1[i]!='\0';i++)
	{
		s2[i]=s1[i];
	}
	s2[i]='\0';
	printf("the copied string is %s\n",s2);
	printf("enter the first string\n");
	scanf("%s",s1);
	printf("enter the second string \n");
	scanf("%s",s2);
	eq=strcmp(s1,s2);
	if(eq==0)
	{
		printf("the strings are equal\n");
	}
	else
	{
		printf("the strings are not equal\n");
	}
	printf("enter the first string\n");
	scanf("%s",s1);
	printf("enter the second string \n");
	scanf("%s",s2);
	strcat(s1,s2);
	printf("the concatinated string is %s\n",s1);
}
