#include<stdio.h>

void Merge(int arr[],int l,int m,int r );
void MergeSort(int arr[],int l,int r);

int main()
{
    int arr[30],i,n;
    printf("Enter the number of integers you want:-");
    scanf("%d",&n);
    printf("Enter the elements:-");
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    MergeSort(arr,0,n-1);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}

void MergeSort(int arr[],int l,int r)
{ 
  int mid;
  if(l<r)
  { mid=l+r/2;
    MergeSort(arr,l,mid);
    MergeSort(arr,mid+1,r);
    Merge(arr,l,mid,r);
  }
  
  
}
void Merge(int arr[],int l,int mid,int r )
{
    int i,j,k,m,arr3[30];
    i=l;
    j=mid+1;
    k=l;
    while(i<=mid && j<=r)
    {
     if(arr[i]<=arr[j])
     {
       arr3[k]=arr[i];
       i++;
     }
     else
     {
         arr3[k]=arr[j];
         j++;
     }
     k++;
    }
    while(i<=mid)
    {
        arr3[k]=arr[i];
        i++;
        k++;
    }
    while(j<=r)
    {
        arr3[k]=arr[j];
        j++;
        k++;
    }
    for(m=0;m<r-l;m++)
    {
        arr[l+m]=arr3[i];
    }
}