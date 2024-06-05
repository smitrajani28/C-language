#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head, *temp, *p;
void insert_at_end()
{
    temp = (struct node *)malloc(1 * sizeof(struct node));
    int a;
    if (head == NULL)
    {
        printf("Enter a element :");
        scanf("%d", &a);
        temp->data = a;
        temp->next = temp;
        head = temp;
    }
    else
    {
        printf("Enter a element.");
        scanf("%d", &a);
        p = head;
        while (p->next != head)
        {
            p = p->next;
        }
        temp->data = a;
        p->next = temp;
        temp->next = head;
    }
}
void insert_at_pos()
{
    temp = (struct node *)malloc(sizeof(struct node));
    p = head;
    int n;
    int pos;
    printf("Enter the element : ");
    scanf("%d", &n);
    printf("Entert the position : ");
    scanf("%d", &pos);
    for (int i = 1; i < pos - 1; i++)
    {
        p = p->next;
    }
    temp->data = n;
    temp->next = p->next;
    p->next = temp;
}
void delete_first()
{
    temp = (struct node *)malloc(sizeof(struct node));
    temp = head;
    p = head;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = temp->next;
    head = head->next;
    free(temp);
}
void delete_after_pos()
{
    temp = (struct node *)malloc(sizeof(struct node));
    temp = head;
    int pos;
    printf("Enter the position : ");
    scanf("%d", &pos);
    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }
    if (temp->next == head)
    {
        p = head;
        head = head->next;
        temp->next = head;
        free(p);
    }
    else
    {
        p = temp->next;
        temp->next = p->next;
        free(p);
    }
}
void display()
{
    p = head;
    printf("circular Linked list :");
    while (p->next != head)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("%d", p->data);
}
int main()
{
    printf("Enrollment NO. :- 210130107011\n");
    printf("Student Name :- Smit Rajani\n");
    printf("Practical-11\n");
    printf("Practical Aim :- Write a program to implement following operations on the circular linked list.\n");
    time_t my_time = time(NULL);
    printf("Time :- %s\n", ctime(&my_time));
    head = (struct node *)malloc(sizeof(struct node));
    head = NULL;
    int n;
    printf("[1] for insert a node at end.\n");
    printf("[2] for insert a node at position\n");
    printf("[3] for delete a node at first.\n");
    printf("[4] for delete a node at after index.\n");
    printf("[5] for display.\n");
    printf("[6] for exit.\n");
    do
    {
        printf("\n");
        printf("Enter your choice : ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            insert_at_end();
            break;
        case 2:
            insert_at_pos();
            break;
        case 3:
            delete_first();
            break;
        case 4:
            delete_after_pos();
            break;
        case 5:
            display();
            break;
        }
    } while (n != 6);
    return 0;
}