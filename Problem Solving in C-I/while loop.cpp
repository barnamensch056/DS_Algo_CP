#include<stdio.h>
int main()
{
	int n,i=1,s=0,f;
	printf("enter integer:-");
	scanf("%d",&n);
	while(i<=n)
	{s=s+i;
	i++;
	}
	f=s/n;
	printf("%d",f);
	return 0;
}
