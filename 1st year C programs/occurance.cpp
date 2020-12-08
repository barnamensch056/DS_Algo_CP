#include<stdio.h>
int occur(char y,int a);
int main()
{ char str2[100], re;
   int n,i;
   printf("Enter the string:-");
   gets(str2);
   occur(re,n);
   printf("\n the character %s has occured : %d",re,n);
   return 0;
}
int occur(char y, int a)
{
	char xD[100];
	int j,i,count;
	for(i=0;xD[i]!='\0';i++)
	{
		for(j=0;xD[j]!='\0';j++)
		{if(xD[i]==xD[j])
		
			y=xD[i];
			count++;
		
		}
	}
	a=count;
	return a;
}

