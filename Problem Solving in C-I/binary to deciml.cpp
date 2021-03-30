#include<stdio.h>
int main()
{
	int a,i=0,s;
	printf("enter integer:-");
	scanf("%d",&a);
	while(a>=2)
	{
		s=a%2;
		a=a/2;
		i++;
	}
	printf("%d",s);
	return 0;
}
