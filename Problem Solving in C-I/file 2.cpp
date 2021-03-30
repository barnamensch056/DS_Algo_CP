#include<stdio.h>
int main(){
	int doors[]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
	};
	int student,j;
	for(student=1;student<=100;student++)
	{int i=1;
	int door=student*i;
	while(door<=100)
	{if(doors[door]==1){
		doors[door]=0;
	}
	else{
		doors[door]=1;
	}
	i++;
	door=student*i;
	}
	}
	printf("Doors remain open after operation:");
	for(j=1;j<=100;j++){
		if(doors[j]==0){
			printf("\n %d",j);
		}
	}
	return 0;
}
