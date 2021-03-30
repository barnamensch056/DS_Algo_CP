#include <stdio.h>
#include <stdlib.h>
#define MAX 50

void enqueue();
void dequeue();
void display();
int array[MAX];
int rear = -1;
int front = -1;

int main()
{
    int choice;
    while (1)
    {
        printf("\n QUEUE IMPLEMENTATION \n");
        printf("1. Enqueue \n");
        printf("2. Dequeue \n");
        printf("3. Display \n");
        printf("4. Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("\nQuitting program...");
            exit(0);
        default:
            printf("Wrong choice \n");
        }
    }
    return 0;
}

void enqueue()
{
    int add_item;
    if (rear == MAX - 1)
        printf("Queue Overflow \n");
    else
    {
        if (front == -1)
            /*If queue is initially empty */
            front = 0;
        printf("Enter the element to insert : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        array[rear] = add_item;
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow \n");
        return;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", array[front]);
        front = front + 1;
    }
}

void display()
{
    int i;
    if (front == -1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", array[i]);
        printf("\n");
    }
}