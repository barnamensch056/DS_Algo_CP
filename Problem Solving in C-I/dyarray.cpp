#include<stdio.h>
#include<stdlib.h>
int main() {
   int n,i,sum=0;
   printf("Enter numer:-");
    scanf("%d",&n);
     int *arr1 = malloc(n*sizeof(char));
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
       sum=sum+arr1[i];
    }
    printf("%d",sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

