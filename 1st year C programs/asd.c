#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
    int n,m,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,s=1,s1,s2,s3,s4,s5,s6,s7,s8,i=0;
    char ld[50],p[15];
    do
    {
    system("cls");
    printf("........Resturant Taj........");
    printf("\nLogin ID:- ");
    scanf("%s",&ld);//gets(s);
    printf("\nPassword:- ");
    scanf("%s",&p);
    if(strcmp(ld,"souvik")==0 && strcmp(p,"asdf")==0)
    {
        printf("Press Enter");
        i++;
        getch();
    }
    if(strcmp(ld,"souvik")!=0)
    {
        printf("Invalid Login ID");
        getch();
    }
    if(strcmp(p,"asdf")!=0)
    {
        printf("\nInvaild Password");
        getch();
    }
    }while(i==0);

    do
    {
        system("cls");
        printf("!!!!!!!!!!!!!Welcome to Resturant Taj!!!!!!!!!!!!!!\n");
        printf("\n************* MAIN MENU *************");
        printf("\n      Name                Price(Rs.)");
        printf("\n1.Aloo Paratha               30     ");
        printf("\n2.Laccha Paratha             40     ");
        printf("\n3.Veg Chowmein               35     ");
        printf("\n4.Veg Thali                  50     ");
        printf("\n5.Paneer Thali               60     ");
        printf("\n6.Plain Dosa                 35     ");
        printf("\n7.Masala Dosa                40     ");
        printf("\n8.Idli                       30     ");
        printf("\n\nEnter your option:- ");
        scanf("%d",&n);
        system("cls");
        switch(n)
            {
                case 1:
                    printf("Enter the quantity:- ");
                    scanf("%d",&a);
                    s1=n;
                    break;
                case 2:
                    printf("Enter the quantity:- ");
                    scanf("%d",&b);
                    s2=n;
                    break;
                case 3:
                    printf("Enter the quantity:- ");
                    scanf("%d",&c);
                    s3=n;
                    break;
                case 4:
                    printf("Enter the quantity:- ");
                    scanf("%d",&d);
                    s4=n;
                    break;
                case 5:
                    printf("Enter the quantity:- ");
                    scanf("%d",&e);
                    s5=n;
                    break;
                case 6:
                    printf("Enter the quantity:- ");
                    scanf("%d",&f);
                    s6=n;
                    break;
                case 7:
                    printf("Enter the quantity:- ");
                    scanf("%d",&g);
                    s7=n;
                    break;
                case 8:
                    printf("Enter the quantity:- ");
                    scanf("%d",&h);
                    s8=n;
                    break;
            }
            printf("\n1.Return to the main menu");
            printf("\n2.View the bill");
            printf("\n\nEnter your option:- ");
            scanf("%d",&m);
    }while(m!=2);
    system("cls");
    printf("The Bill is:-\n");
    printf("      Name            Quantity    Price    ");
    if(s1==1)
        printf("\n%d.Aloo Paratha         %d          %d     ",s++,a,a*30);
    if(s2==2)
        printf("\n%d.Laccha Paratha       %d          %d     ",s++,b,b*40);
    if(s3==3)
        printf("\n%d.Veg Chowmein         %d          %d     ",s++,c,c*35);
    if(s4==4)
        printf("\n%d.Veg Thali            %d          %d     ",s++,d,d*50);
    if(s5==5)
        printf("\n%d.Paneer Thali         %d          %d     ",s++,e,e*60);
    if(s6==6)
        printf("\n%d.Plain Dosa           %d          %d     ",s++,f,f*35);
    if(s7==7)
        printf("\n%d.Masala Dosa          %d          %d     ",s++,g,g*40);
    if(s8==8)
        printf("\n%d.Idli                 %d          %d     ",s++,h,h*30);
        printf("\nTotal:                             %d      ",a*30+b*40+c*35+d*50+e*60+f*35+g*40+h*30);

}

