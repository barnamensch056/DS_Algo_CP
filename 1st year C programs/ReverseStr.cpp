#include<stdio.h>
#include<string.h>
void reverseStr(char );
int main()
  { 
    char str1,str2;
    printf("Enter a string:-");
    gets(str1);
    reverseStr(str1);
    return 0;
}
void reverseStr(char str1)
{
	char str1,str3,temp;
	int i,j;
	for(i=strlen(str1)-1;i>0;i--)
	for(j=0;str3[j]!='\0';j++)
	{
		str3[j]=str1[i];
		
	}
}
