#include <stdio.h>
int isCheck(int *arr,int N);
int main() {
	//code
	int t,arr1[100],i,result,n;
	while(t>0)
	{
	    scanf("%d",&n);
	    for(i=0;i<n-1;i++)
	    {
	        scanf("%d",&arr1[i]);
	     
	    }
	        result=isCheck(arr1,n);
	        printf("%d",result);
	
	    t--;
	}
	return 0;
}
int isCheck(int *arr,int N)
{
    int sum,sum2,j,k;
    while(N>0)
    {
        sum=sum+N;
        N--;
         }
    for(k=0;k<N-1;k++)
    {
        sum2=sum2+arr[k];
        
    }
    return sum2-sum;
         
}
