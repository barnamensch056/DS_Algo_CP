#include<stdio.h>
int main()
{
 int i,j,k,l,p,q,n[i][j],c[k][l],m[p][q];
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{ printf("enter integers:-");
  scanf("%d",&n[i][j]);

 }

 for(k=0;k<3;k++)
 for(l=0;l<3;l++)
 {
 printf("enter inegers:-");
 scanf("%d", &c[k][l]);

}
for(p=0;p<3;p++)
for(q=0;q<3;q++)
{
	for(j=0;j<3;j++)
	for(i=0;i<3;i++)
	{ for(k=0;k<3;k++)
      for(l=0;l<3;l++)
     { m[p][q]=n[i][j]*c[k][l];
      printf("%d",m[p][q] );
      }

	}
}
return 0;
}
