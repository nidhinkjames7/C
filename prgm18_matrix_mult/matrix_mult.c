#include<stdio.h>
void matrixmult(int[][10],int[][10],int,int,int);
//int a[10][10],b[10][10],m,n,p,q,i,j;
void main()
{
	int a[10][10],b[10][10],m,n,p,q,i,j;
	printf("enter the row and column of first matrix\n");
	scanf("%d %d",&m,&n);
	printf("enter the row and column of second matrix\n");
	scanf("%d %d",&p,&q);
	printf("enter the values of first matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the values of second matrix\n");	
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);

		}
	}
	if(n==p)
	{
		matrixmult(a,b,m,q,p);
	}
        else
        {
                printf("Multiplication not possible ");
	}
}
void matrixmult(int a[10][10],int b[10][10],int m,int q,int p)
{
	int c[10][10],i,j,k;
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			c[i][j]=0;
                      for(k=0;k<p;k++)
                        {
                          c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
     			 }
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}

