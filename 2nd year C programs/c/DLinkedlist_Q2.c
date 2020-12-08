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

int Largest()
{ 
  struct Node* temp=head;
  int larger=temp->data;
  while(temp!=NULL) 
  {
      if(temp->data>larger)
      {
          larger=temp->data;
      }
     temp=temp->next;
  }
   return larger;
}

int main()
{
    int n,x,y,i,result;
    printf("Enter the numbers in the list;-");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        insertion(x);
    }
    Print();
    result=Largest();
    printf("The greatest element is - %d",result);
    return 0;
}