#include<stdio.h>
int main()
{
	FILE *p;
	char c;
	p=fopen("abc.txt","w");
	if(p==NULL)
	{
		printf("Not possible");
		return 0;
	}
	else
	{
		printf("Enter Text:-");
		while((c=getchar())!=EOF)
		   {
		   	putchar(c);
		   }
		   fclose(p);
		   
}
}

