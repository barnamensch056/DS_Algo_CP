#include<stdio.h>
int main()
{
	int n=100000,i,j;
	for(i=10000;i<100000;i++)
	{
		if(i%5==0&&i%6==0&&i%7==0)
		{
			if(i<n)
			{
				j=i;
			}
		}
	}
	printf("%d",j);
	return 0;
}
