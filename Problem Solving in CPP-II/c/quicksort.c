#include<stdio.h>
int partitionIndex(int arr[],int start,int end);
void swap(int *m,int *n);
void QwikSort(int arr[],int start,int end);
int main()
{
    int arr[100],n,i;
    printf("Enter the no of elements ypou  want:-");
    scanf("%d",&n);
    printf("Enter the elements:-");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    Qwiksort(arr,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d",&arr[i]);
    }
    return 0;
}
void swap(int *m,int *n)
{
    int o;
    o=*m;
    *m=*n;
    *n=o;
}
int partitionIndex(int arr[],int start,int end)
{
 int pivot,pIndex,i;
 pivot=arr[end];
 pIndex=start;
 for(i=start;i<=end;i++)
 {
     if(arr[i]<pivot)
     {
         swap(&arr[i],&arr[pIndex]);
         pIndex++;
     }
     swap(&arr[pIndex],&arr[end]);
 }
 return pIndex;
}
void QwikSort(int arr[],int start,int end)
{
    if(start<end)
    {
        int pIndex=partitionIndex(arr,start,end);
        QwikSort(arr,start,pIndex-1);
        QwikSort(arr,pIndex+1,end);
    }
}