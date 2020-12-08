#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n[i][j],sum1=0,sum2=0;
	printf("Enter integers:-");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		
		scanf("%d",&n[i][j]);
		
	}

	
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
	  if(i==j)
	  {
	  	sum1+=n[i][j];
	   } 
		
	}
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
	  if(i+j==3)
	  {
	  	sum2+=n[i][j];
	   } 
		
	}
	int diff=abs(sum1-sum2);
	printf("%d %d %d",diff,sum1,sum2);
	return 0;
}
