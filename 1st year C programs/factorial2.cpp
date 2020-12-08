#include<stdio.h>
int nrc(int,int);
int main()
{
int n,r;
printf("enter integers:-");
scanf("%d,%d",&n,&r);
nrc(n,r);
return 0;
}
int nrc(int a,int b)
{
	int i,j,s=1,r=1,c;
	for(i=1;i<=a;i++)
	{for(j=i;j<=b;j++)
	{
		c=s*i/r*i;
		return c;
		
	}
	}
}




