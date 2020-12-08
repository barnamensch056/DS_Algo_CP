#include<stdio.h>
void sort(int arr[], int);
int main()
{
  int arr[10],n,i;
  printf("Enter size of the array:-");
  scanf("%d",&n);
  printf("Enter the integers:-");
  for(i=0;i<n;i++)
  {scanf("%d",arr[i]);
  }
  sort(arr, n);
  return 0;
}
void sort(int arr[10],int m)
{  int i,j,t;
	for(i=0;i<m;i++)
	{
	  for(j=i;j<m;j++)
	   {
	   if(arr[i]>arr[j])
	   t=arr[j];
	   arr[j]=arr[i];
	   arr[i]=t;
	   
}
	return arr[i];
	}
}

  


