#include <stdio.h>
void selectionSort(int arr[],int n);
void swap1(int *xp,int *mp);
int smallest(int arr[],int k,int n);
int main()
{
    int arr[100],i,n;
    printf("Enter the size of array:-");
    scanf("%d",&n);
    printf("Enter the elements:-");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    selectionSort(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
int smallest(int arr[],int k,int n)
{
    int i,pos=k,small=arr[k];
    for(i=k+1;i<n;i++)
    {
        if(arr[i]<small)
        small=arr[i];
        pos=i;
    }
    return pos;
}
void swap1(int *xp,int *mp)
{
    int temp;
    temp=*xp;
    *xp=*mp;
    *mp=temp;
}

void selectionSort(int arr[],int n)
{
    int k,pos,temp;
    for(k=0;k<n;k++)
    {
        pos=smallest(arr,k,n);
        swap1(&arr[pos],&arr[k]);
    }
}
