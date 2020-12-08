#include<stdio.h>
#include<stdlib.h>
int main(){
int i,j,n,cnt=0;
char s[1000];
printf("Enter the numbers you want:-");
scanf("%d",&n);
printf("Enter the elements:-");
for(i=0;i<n;i++)
{
	scanf("%s",&s[i]);
}
for(j=0;j<10;j++)
{
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]-48==j)
		cnt++;
	}
	printf("%d : %d\t",j,cnt);
	cnt=0;
}
return 0;
}
