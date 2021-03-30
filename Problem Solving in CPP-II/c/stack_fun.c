#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void Push(int x);
void Deletion();
int getMax();

#define MAX 101
int  arr[MAX];
int top=-1;

int main() {
    int i,x,m,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        if(m==1)
        {
            scanf("%d",&x);
        }
        switch(m)
        {
            case 1:Push(x);
                break;
            case 2:Deletion();
                break;
            case 3:j=getMax();
                printf("\n%d",j);
                break;
        }
    }
    return 0;
}
    void Push(int x)
    {
      if(top==MAX-1)
      {
          printf("stackoverflow");
          return;
      }
      top+=1;
      arr[top]=x; 
    }
    void Deletion()
    {
       if(top==-1) 
       {
        return;
       }
       top--;
    }
    int getMax()
    {
     int i,result=arr[0];
     int r=sizeof(arr);
     for(i=0;i<r;i++)
     {
         if(arr[i]>result)
         {
             result=arr[i];
         }
     }
     return result;
    }