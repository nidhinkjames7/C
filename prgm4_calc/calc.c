#include<stdio.h>
void main()
{
	int a,b,c,op,s;
	do
	{
		printf("1.addition\n");
		printf("2.substraction\n");
		printf("3.multiplication\n");
		printf("4.difference\n");
		printf("enter your choice\n");
		scanf("%d",&op);
	        printf("enter values for a and b\n");
	        scanf("%d%d",&a,&b);
		switch(op)
		{
			case 1: c=a+b;
				printf("the sum is %d",c);
				break;
			case 2: c=a-b;
				printf("the difference is %d",c);
				break;
			case 3: c=a*b;
				printf("the result is %d",c);	
				break;
			case 4: c=a/b;
				printf("the result is %d",c);
				break;
			default: printf("operation not possible\n");
				break;
	
		}
		printf("\ndo you want to continue...(1/0)\n");
		scanf("%d",&s);
	}while(s==1);
}



 
