#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* sortedMerge(struct Node* a, struct Node* b);

/* Function to print Nodes in a given linked list */
void printList(struct Node *n)
{
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

/* Driver program to test above function*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int data;
        cin>>data;
        struct Node *head1 = new Node(data);
        struct Node *tail1 = head1;
        for (int i = 1; i < n; ++i)
        {
            cin>>data;
            tail1->next = new Node(data);
            tail1 = tail1->next;
        }

        cin>>data;
        struct Node *head2 = new Node(data);
        struct Node *tail2 = head2;
        for(int i=1; i<m; i++)
        {
            cin>>data;
            tail2->next = new Node(data);
            tail2 = tail2->next;
        }

        Node *head = sortedMerge(head1, head2);
        printList(head);
    }
    return 0;
}
// } Driver Code Ends


 

/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
void MoveNode(Node**destref,Node**sourceref){
    Node* newNode=*sourceref;
    if(newNode!=NULL){
    *sourceref=newNode->next;
    newNode->next=*destref;
    *destref=newNode;}
}
Node* sortedMerge(Node* head_A, Node* head_B)  
{  
 Node *res,*tail;
 tail=(Node*)malloc(sizeof(Node*));

 res=tail;
 tail->next=NULL;
 while(1){
     if(head_A==NULL){
     tail->next=head_B;
     break;}
     else if(head_B==NULL){
     tail->next=head_A;
     break;}
     else if(head_A->data<head_B->data){
         MoveNode(&(tail->next),&head_A);
     }
     else{
        MoveNode(&(tail->next),&head_B); 
     }
     tail=tail->next;
 }
return res->next;    
} 

