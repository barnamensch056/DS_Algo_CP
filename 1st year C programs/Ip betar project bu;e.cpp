#include<stdio.h>
void view_vn();
void give_nw();
void view_hw();

int main()
{
	int opt1,opt2,opt3,c;
	char note_math11,note_math12,note_IP11,note_IP12,sub,T_password,pgt_math,pgt_IP,T_username,S_password,S_username,math1;
	printf("learning is....\n");
	printf("choose any opt..-");
	printf("press 1 for teacher login and press 2 for student login");
	scanf("%d",&opt1);
	if(opt1==1)
	{
	   
	    printf("Enter your login and password-");
	    scanf("%c,%c",T_username,T_password);
	   
	    if(T_username==pgt_math&& T_password==math1)
	    {
	    
	    	printf("Enter your choic-\n");
	    	printf("update class-");
	    	printf("Enter 1 for updating class and 2 for checking hpmework");
	    	scanf("%d",opt2);
	    	if(opt1==1)
	    	{
	    	
	    		printf("Enter the subject and class-");
	    		scanf("%c,%c",&c,&sub);
	    		printf("class- %c",c);
	    		printf("subject- %c",sub);
	    		printf("your updated notes-");
	    		view_vn();
			}
		}
	    
	    
	}
	
return 0;	
}
void view_vn()
{
	int c;
	printf("Notes\n");
	if(sub==math)
	{ switch(c)
	   {
	   	case'11': printf("%c notes\n",sub);
	   	          printf("%s notes",note_math11);
	   	          break;
	   	case'12': printf("%c notes\n",sub);
	   	          printf("%s notes",note_math12);
	   	          break;  
			default: printf("Invalid class") ;  
			   
	   		
	   }
	
		
	}
	else
	printf("Anything");
	
		
	}
}
