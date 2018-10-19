#include<stdio.h>
int fib(int);
void main()
        {
        int i,n;
        printf("enter the limit: \n");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        printf("%d\n",fib(i));
        }
        int fib(int n)
        {
        int f;
        if(n==1)
        return 0;
        else
        if(n==2)
        return 1;
        f=fib(n-1)+fib(n-2);
        return f;
        }

