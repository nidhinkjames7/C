#include<stdio.h>
void main()
{
 int i,j,l,u,s=0;
 printf("Enter the limits:");
 scanf("%d%d",&l,&u);
 for(i=l;i<u;i++)
 {
  for(j=1;j<i;j++)
  {
   if(i%j==0)
   {
    s=s+j;
   }
  }
  if(i==s)
  {
   printf("%d\n",i);
  }
  s=0;
 }
}

