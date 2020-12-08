#include<stdio.h>
#include <stdlib.h>
struct Node{
   int data;
   struct Node* left;
   struct Node* right;
};

struct Node* inserTion(struct Node* root,int data)
{
   if( root==NULL)
    { struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
     newNode->data=data;
     newNode->left=NULL;
     newNode->right=NULL;
     return newNode;
    }
    else{
        struct Node* current;
        if(data<=root->data)
        {
            current=inserTion(root->left,data);
            root->left=current;
        }
        else{
            current=inserTion(root->right,data);
            root->right=current;
        }
        return root;
    }
}
void preOrder( struct Node *root) {
if(root==NULL)
return;
printf("%d",root->data);
preOrder(root->left);
preOrder(root->right);
}
int main()
{
    struct Node* root=NULL;
    int t,data;
    printf("Enter the number of nodes:-");
    scanf("%d",&t);
    printf("Enter the datas to the tree:-");
    while(t>0)
    {
     scanf("%d",&data);
        root=inserTion(root,data);
        t--;
    }
    preOrder(root);
    return 0;
}