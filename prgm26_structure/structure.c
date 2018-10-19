#include<stdio.h>
#include<string.h>
struct emp
{
	int id;
	char name[10];
	float salary;
}e[10];
void insert(struct emp[]);
void view(struct emp[]);
void search(struct emp[]);
void delete(struct emp[]);
int s,n,i,o,j;
int ch;
void main()
{
	do
	{
		printf("***Please Enter ur Option***\n 1.Insert\n 2.View\n 3.Search\n 4.Delete\n");
		scanf("%d",&o);	
		switch(o)
		{
			case 1:	
				insert(e);
				break;
			case 2:
				view(e);
				break;
			case 3:
				search(e);
				break;
			case 4: 
				delete(e);
				break;
			default:
				printf("wrong option\n");
				break;
		}
		printf("do you want to continue (1 or 0)\n");
		scanf("%d",&ch);
	}while(ch==1);
}
void insert(struct emp e[])
{
	printf("*** INSERTION ***\n");
	printf("enter the number of employees to be inserted\n");
	scanf("%d",&n);
//	n=n+i;
	printf("*** enter the details ***\n enter id\n enter the name\n enter the salary\n");
	for(i=0;i<n;i++)
	{
		scanf("%d %s %f",&e[i].id,e[i].name,&e[i].salary);
	
	}
}
void view(struct emp e[])
{

	printf("*** DETAILS ***\n");
	for(i=0;i<n;i++)
	printf("emp id=%d\n emp name=%s\n emp salary=%f\n",e[i].id,e[i].name,e[i].salary);	
}
void search(struct emp e[])
{
	int f;
	printf("*** SEARCHING ***\n");
	printf("enter the id to be searched\n");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(e[i].id==s)
		{
			printf("id found the deatils of the employee is id=%d\n name=%s \n salary=%f\n",e[i].id,e[i].name,e[i].salary);
			f=1;
			break;
		}
	}
	if(f!=1)
	{
		printf("id not found... plzz type another\n");
	}
}
void delete(struct emp e[])
{
	printf("*** DELETION ***\n");
	char del_name[20];
	int f,k;
	printf("enter the name to be deleted\n");
	scanf("%s",del_name);
	for(i=0;i<n;i++)
	{
		if(strcmp(e[i].name,del_name)==0)
		{
			f=1;
			for(k=i;k<n;k++)
			{
				e[k]=e[k+1];
			}
			printf("deleted\n");
			break;
		}
		else
		{
			f=0;
		}
	}
	if(f==0)
	{
		printf("Not found\n");
	}
	n--;
}


