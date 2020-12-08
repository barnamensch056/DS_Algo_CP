#include<stdio.h>
int main()
{
	int num1=2,num2=3,sum=0,mul=0,div=1;
	int *p,*q;
	p=&num1;
	q=&num2;
	*p+=2;
	printf("%p",p);

return 0;
}
