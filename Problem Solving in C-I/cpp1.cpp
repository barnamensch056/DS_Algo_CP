#include <stdio.h> 
int main()
{
	int a1[100],size1,rot,i,j,temp[10];
	printf("Enter the size of array:-");
	scanf("%d",&size1);
	printf("Enter the position to which it is rotated:-");
	scanf("%d",&rot);
	printf("Enter the integers:-");
	for(i=0;i<size1;i++)
	{
		scanf("%d",&a1[i]);
	}
	for(i=0;i<rot;i++)
	{
	temp[i]=a1[i];
    }
    for(i=0;i<size1-rot;i++)
    {
    	a1[i]=a1[i+rot];
    	
	}
	for(j=size1-rot;j<size1;j++)
	{for(i=0;i<rot;i++)
	{
		a1[j]=temp[i];
		
	
	}
	break;
    }  
	for(i=0;i<size1;i++)
	{
		printf("%d",a1[i]);
	}
    return 0;
	
}
