#include <stdio.h>
#include <stdlib.h>
void push(int);
void pop();
void display();
int isfull();
int isempty();
int s[100], top, n;
int main()
{
    int choice, item;
    top = -1;
    printf("Enter the size of the stack: ");
    scanf("%d", &n);
    do
    {
        printf("Stack Operations:-\n");
        printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the value to be pushed: ");
            scanf("%d", &item);
            push(item);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default:
            printf("Invalid input\n");
        }
    } while (choice != 4);
    return 0;
}
void push(int n)
{
    if (isfull() == 0)
    {
        top++;
        s[top] = n;
    }
    else
        printf("Stack is Full/Overflow\n");
}
void pop()
{
    if (isempty() == 0)
    {
        printf("The popped element is %d\n", s[top]);
        top--;
    }
    else
        printf("The stack is empty\n");
}
void display()
{
    int i;
    if (isempty() == 0)
    {
        printf("The stack elements: ");
        for (i = 0; i <= top; i++)
            printf("%d ", s[i]);
        printf("\n");
    }
    else
        printf("The stack is empty\n");
}
int isfull()
{
    if (top == (n - 1))
        return 1;
    else
        return 0;
}
int isempty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}