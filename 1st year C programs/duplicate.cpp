#include<stdio.h>
#define MAX 100
int main()
{
int arr[MAX],n,i,j,cout;
printf("Enter the size of array:-");
scanf("%d",&n);
printf("enter integrs:-");
for(i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}
   for(i=0;i<n;i++)
   {
   	  for(j=i+1;j<n;j++)
   	  {
   	  	if(arr[i]=arr[j])
   	  	{
			 cout++;
			 break;
			 }
		 }
   }
   printf("%d",cout);
   return 0;
}
