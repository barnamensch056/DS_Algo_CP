#include<stdio.h>
int main()
{
  int marks[50],i,numbers;
  int groups[10]={0};
  printf("enter the marks :-");
  for(i=0;i<10;i++)
  {
  	printf("\n marks[%d]= ",i );
  	scanf("%d",&marks[i]);
  	++groups[(int) marks[i]/10];
	  
  	
   } 
   
   for(i=0;i<10;i++)
   {printf("\n %d \t \t  ",i);
   	for(numbers=0;numbers<groups[i];numbers++)
   	{ printf("*");
   }
	   
    
    }
	return 0;
}
