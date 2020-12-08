#include<stdio.h>
int GCD1(int ,int );
int main()
{
  int c,d,result;
  printf("Enter numbers:-");
  scanf("%d,%d",&c,&d);
  result=GCD1(c,d);
  printf("%d is the greatest common divisor",result);
  return 0; 	
}
int GCD1(int a,int b)
{
	int j;
	while(j<0)
	{
		j=a%b;
		return b;

	}
	return GCD1(a,b);	
}
