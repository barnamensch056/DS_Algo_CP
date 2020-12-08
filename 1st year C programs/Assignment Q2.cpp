#include<stdio.h>
#include<string.h>
void govern(char *x,int a,int b);
int main()
{ 
   char str1[100];
   int n, pos,i;
   printf("Enter the string:-");
   gets(str1);
   printf("\n length of the string: %d",strlen(str1));
   printf("\nEnter the number of characters needed:-");
   scanf("%d",&n);
   if(strlen(str1)<n)
       puts(str1);
       else
           govern(str1,n,strlen(str1));
   return 0;
}
void govern(char *x1,int a,int b)
{
	strcpy(&x1[a],&x1[b]);
	puts(x1);
}
