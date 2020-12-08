#include<stdio.h>
#include<string.h>
int occur(char*,char*,int);
int main()
{
	char str2[100];
	char re;
	int n;
	printf("Enter the string:-");
	gets(str2);
	occur(str2,re,n);
	printf("\n The %s character has occured :%d ",re,n);
	return 0;
	
}
int occur(char* x2,char* y,int a)
{
	int i,j,a=0;
	for(i=0;x2[i]!='\0';i++)
	{for(j=0;x2[j]!='\0';j++)
	{ if(x2[i]==x2[j])
	  a++;
	}
	}
	return a;
}
