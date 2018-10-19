#include<stdio.h>
#include<math.h>
void main()
{
 int l,u,d,c,s=0;
 printf("Enter the limit:");
 scanf("%d%d",&l,&u);
 while(l<u)
 {
  c=l;
  while(c>0)
  {
   d=c%10;
   s=s+(d*d*d);
   c=c/10;
  }
  if(l==s)
  {
   printf("%d\n",l);
  }
  l++;s=0; 
 }
}

