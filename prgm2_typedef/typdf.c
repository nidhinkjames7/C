#include<stdio.h>
void main()
{
  typedef float newtype;
  newtype p,n,r,s;
  printf("Enter p,n,r:");
  scanf("%f%f%f",&p,&n,&r);
  s=(p*n*r)/100;
  printf("simple interest is = %f",s);
}


