#include<stdio.h>
void abc(int*,int*,int*);
int main()
{
int i,j,k;
printf("enter integers:-");
scanf("%d,%d,%d",&i,&j,&k);
abc(&i,&j,&k);
return 0;
}

void abc(int*p,int*q,int*r)
{
if(*p<*q && *p<*r)
{
 printf("%d is greater than %d,%d",*p,*q,*r);
  if(*q<*r && *q<*p)
  {
printf("%d is greater than %d,%d",*q,*p,*r);
}
}
else
printf("%d is greater than %d,%d",*r,*p,*q);


}
