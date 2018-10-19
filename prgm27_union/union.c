#include<stdio.h>
void student();
union stud
{
	int rollno;
	char name[20];
	int mark;
}s;
void main()
{
	student();
}
void student()
{
	printf("enter the rollno\n");
	scanf("%d",&s.rollno);
	printf("student rollno:%d\n",s.rollno);
	printf("enter the student name\n");
	scanf("%s",s.name);
	printf("stuent name:%s\n",s.name);
	printf("enter the student mark\n");
	scanf("%d",&s.mark);
	printf("studnet mark:%d\n",s.mark);
}
