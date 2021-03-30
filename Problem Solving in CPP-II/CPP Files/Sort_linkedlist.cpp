#include <stdlib.h>
#include <iostream>
#include<stdio.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to mergesort the linked list
   It should return head of the modified list  */
Node* merge(Node* headA,Node* headB){
    Node* result=(Node*)malloc(sizeof(Node));
    if(headA==NULL)
    return headB;
    else if(headB==NULL)
    return headA;
    if(headA->data<headB->data){
        result=headA;
        result->next=merge(headA->next,headB);
    }
    else{
        result=headB;
        result->next=merge(headA,headB->next);
    }
    return result;
}
Node* mergeSort(Node* head) {
       if(head==NULL && head->next==NULL)
       return head;
       Node *slow,*fast,*temp;
       slow=head;
       fast=head;
      
       while(fast->next!=NULL&&fast!=NULL){
           slow=slow->next;
           fast=fast->next->next;
       }
       slow->next=NULL;

       Node* leftH=head;
       Node* rightH=slowS;
       
       return merge(mergeSort(leftH),mergeSort(rightH));
       
}


// { Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        a = mergeSort(a);
        printList(a);
    }
    return 0;
}  // } Driver Code Ends