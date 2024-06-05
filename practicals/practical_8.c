#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(struct Node *top)
{

    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct Node *top)
{

    struct Node *p = (struct Node *)malloc(sizeof(struct Node));

    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Node *push(struct Node *top, int x)
{
    if (isFull(top))
    {
        printf("Stack is overflow");
        return 0;
    }

    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
    }
}

int pop(struct Node **top)
{
    if (isEmpty(*top))
    {
        printf("Stack is underflow");
        return 0;
    }

    else
    {
        struct Node *n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int main()
{
    printf("Enrollment NO. :- 210130107011\n");
    printf("Student Name :- Smit Rajani\n");
    printf("Practical-8\n");
    printf("Practical Aim: Write a program to implement stack using linked lists.\n");
    time_t my_time = time(NULL);
    printf("Time :- %s\n", ctime(&my_time));

    struct Node *top = NULL;
    top = push(top, 7);
    top = push(top, 8);
    top = push(top, 89);
    linkedListTraversal(top);
    printf("--------------------------------------------------\n");
    int element = pop(&top);
    printf("popped element is %d:\n", element);
    linkedListTraversal(top);
    return 0;
}