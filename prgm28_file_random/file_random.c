#include<stdio.h>
struct emp
{
	int empno;
	char name[20];
	float salary;
};
int main(void)
{
	struct emp e;
	FILE *fp;
	int i,n,position,recno;
	fp=fopen("emp.txt","w");
	printf("Enter the number of employees\n");
	scanf("%d",&n);
	printf("Enter empno,name and salary  %d employees\n",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d%s%f",&e.empno,e.name,&e.salary);
		fwrite(&e,sizeof(e),1,fp);
	}
	fclose(fp);
	printf("Contents of the file emp.txt\n");
	fp=fopen("emp.txt","r");
	while(fread(&e,sizeof(e),1,fp))

	{
		printf("%d\t%s\t%f\t\n",e.empno,e.name,e.salary);
	}
	fclose(fp);
	fp=fopen("emp.txt","r+");
	if(fp==NULL)
	{
		printf("emp.txt cannot be opened");
	}
        else
	{
	printf("Enter recno of the record to be updated\n");
	scanf("%d",&recno);
	fseek(fp,(recno-1)*sizeof(e),SEEK_SET);
	printf("Enter new details of the employee\n");
	scanf("%d%s%f",&e.empno,e.name,&e.salary);
	fwrite(&e,sizeof(e),1,fp);
	fclose(fp);
	printf("Contents of the file emp.txt\n");
        fp=fopen("emp.txt","r");
        while(fread(&e,sizeof(e),1,fp))

        {
                printf("%d\t%s\t%f\t\n",e.empno,e.name,e.salary);
        }
        fclose(fp);
	}
	return 0;
}	

