#include<stdio.h>
#include<math.h>
int diagonalDifference(int arr_rows, int arr_columns, int** arr1) {
    int i,j,sum1,sum2;
    for(i=0;i<arr_rows;i++)
    {for(j=0;j<arr_columns;j++)
    {
        if(i==j)
        {
            sum1+=arr1[i][j];
        }
    }
    }
     for(i=0;i<arr_rows;i++)
    {for(j=0;j<arr_columns;j++)
    {
    	 if(i+j==arr_rows)
        {
            sum2+=arr1[i][j];
        }
    }
    }
   int diff=abs(sum2-sum1);
   return diff;

}

int main()
{
	int arr1[100][100],arr_rows,arr_columns,i,j,a;
	printf("Enter rows:-");
	scanf("%d",&arr_rows);
	printf("Enter columns:-");
	scanf("%d",&arr_columns);
	printf("Enter integers:-");
	for(i=0;i<arr_rows;i++)
	{for(j=0;j<arr_columns;j++)
	{
		scanf("%d",&arr1[i][j]);
		
	}
	int result=diagonalDifference( arr_rows,  arr_columns, ** arr1);
	printf("%d",result);
return 0;
}
