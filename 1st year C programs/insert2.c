#include <stdio.h>
#include <math.h>
void insertionSort(int arr[],int n);
int main()
{
	int arr[]={14,8,23,5,9};
	int n=sizeof(arr);
	int i;
	insertionSort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
void insertionSort(int arr[],int n)
{
	int i,j,key;
	for (i=1;i<n;i++)
	{
		key= arr[i];
		j=i-1;
		for( ;j>0 && arr[j]>key;j--)
		{
		   arr[j+1]=arr[j];
		   }
		   arr[j+1]=key;
		
	}
}