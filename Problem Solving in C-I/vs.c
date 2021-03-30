#include<stdio.h>
int main()
{int i,j,a,b;
a=6;
b=6;
for(i=1;i<=6;i++)
{for(j=1;j<=11;j++)
{
if(j<a||j>b)
printf(" ");
else
printf("*");}
printf("\n");
a--;
b++;
}
}
