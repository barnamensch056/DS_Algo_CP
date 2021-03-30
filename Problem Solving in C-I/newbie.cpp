#include<stdio.h>
#define MAX 100
int binarySearch(int arr[],int n,int k);
int main()
{
	int arr[MAX],i,n,k,result;
	printf("Enter the size:-");
	scanf("%d",&n);
	printf("Enter the elements:-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("ENter the no. to be searched:-");
	scanf("%d",&k);
	result=binarySearch(arr,n,k);
	printf("%d",&result);
}
int binarySearch(int arr[],int n,int k)
{ 
    int j,i,sum=0;
	for(j=0;j<n;j++)
	{
		if(arr[j]>arr[j+1])
		sum=sum+1;
	}
	if (arr[sum]==k)
	return sum;
	else if(arr[sum]!=k)
	{
		while(sum>0)
		{
			if(arr[sum]==k)
			return sum;
			sum--;
		}
		while(sum<n)
		{
			if(arr[sum]==k)
			return sum;
			sum++;
		}
	}
	else
	printf( "Not found");
	
}

