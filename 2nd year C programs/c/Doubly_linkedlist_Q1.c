#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};
struct Node *head=NULL;
struct Node* GetNode(int x)
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=x;
    newNode->prev=NULL;
    newNode->next=NULL;
    return newNode;
}
void insertion(int x)
{
    struct Node* newNode=GetNode(x);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    head->prev=newNode;
    newNode->next=head;
    head=newNode;
}
void Delete(int y)
{
    struct Node* temp=head,*ahead,*after;
    if(temp->data==y)
    {
        head=temp->next;
        head->prev=NULL;
        free(temp);
        return;
    }
    while(temp->data!=y)
    {
        ahead=temp;
        temp=temp->next;
    }
   after=temp->next;
   ahead->next=temp->next;
   after->prev=ahead;
   free(temp);
}
void Print()
{
  struct Node *temp1=head;
  printf("List is:");
  while(temp1!=NULL)
  {
    printf(" %d  ",temp1->data);
    temp1=temp1->next;
  }
  printf("\n");
}
int main()
{
    int n,x,y,i;
    printf("Enter the numbers in the list:-");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        insertion(x);
    }
    Print();
    printf("Enter the number to be deleted:-");
    scanf("%d",&y);
    Delete(y);
    Print();
    return 0;
}