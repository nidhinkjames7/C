#include<stdio.h>
enum subjects
{
	malayalam,
	english,
	computer,
	maths
};
void main()
{
	int marks[4];
	enum subjects sub;
	printf("enter marks of 4 subject\n");
	for(sub=malayalam;sub<=maths;sub++)
	{
		scanf("%d",&marks[sub]);
	}
	printf("marks in different subjects are\n");
	printf("malayalam=%d\n english=%d\n computer=%d\n maths=%d\n",marks[malayalam],marks[english],marks[computer],marks[maths]);
}
