#include <stdio.h>
void reverse(int *parr,int ini,int fina);
void reverse1(int *parr,int d,int N);
int main() {
    int d,i,arr[100],N,t;
    printf("Enter the no. of test cases:-");
    scanf("%d",&t);
    while(t>0)
    {
        printf("Enter the size:-");
        scanf("%d",&N);
        printf("Enter the elements of the array:-");
        for(i=0;i<N;i++)
        {
            scanf("%d",&arr[i]);
        }
        reverse1(arr,d,N);
        printf("the reverse array is-");
        for(i=0;i<N;i++)
        {
            printf("%d",&arr[i]);
        }
        t--;
    }
    return 0;
}
    void reverse(int *parr,int ini,int fina)
	{
		int temp;
	   	while(ini<fina)
	   	{
	   	   temp=parr[ini];
	   	   parr[ini]=parr[fina];
	   	   parr[fina]=temp;
	   		ini++;
	   		fina--;
		   }
	 }
	 void reverse1(int *parr,int d,int N)
	 {
	 	reverse(parr,0,d-1);
	 	reverse(parr,d,N-1);
	 	reverse(parr,0,N-1);
	  } 
	//code
