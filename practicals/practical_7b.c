#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct node
{
    int data;
    struct node *next;
};
struct node *insert_at_front(struct node *head, int val)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = head;
    head = temp;
    return head;
}
struct node *insert_at_end(struct node *head, int val)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    temp->data = val;
    temp->next = NULL;
    p->next = temp;
    return head;
}
struct node *insert_in_ascending(struct node *head, int val)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    if (head->data >= val)
    {
        temp->data = val;
        temp->next = head;
        head = temp;
        return head;
    }
    else
    {
        while (p->next != NULL && p->next->data <= val)
        {
            p = p->next;
        }
        temp->data = val;
        temp->next = p->next;
        p->next = temp;
        return head;
    }
}
struct node *delet_first(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
struct node *delete_before(struct node *head, int index)
{
    int i = 1;
    struct node *ptr = head;
    struct node *temp;
    if (index > 2)

    {
        while (i <= index - 2)
        {
            temp = ptr;
            ptr = ptr->next;
            i++;
        }
        temp->next = ptr->next;
        free(ptr);
        return head;
    }
    else if (index == 1)
    {
        printf("This index is invalid.\n");
        return head;
    }
    else
    {
        head = ptr->next;
        free(ptr);
        return head;
    }
}
struct node *delete_after(struct node *head, int index)
{
    struct node *ptr = head;
    struct node *temp;
    int i = 1;
    while (i < index)
    {
        temp = ptr;
        ptr = ptr->next;
        i++;
    }
    temp = ptr;
    ptr = ptr->next;
    temp->next = ptr->next;
    free(ptr);
    return head;
}
void display(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
int main()
{
    printf("Enrollment NO. :- 210130107008\n");
    printf("Student Name :- UDAY VARA.\n");
    printf("Practical-7\n");
    time_t my_time = time(NULL);
    printf("Time :- %s\n", ctime(&my_time));
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->next = first;
    first->data = 20;
    first->next = second;
    second->data = 30;
    second->next = third;
    third->data = 40;
    third->next = NULL;
    int n, val, index;
    printf("[1] for insert the node at front of linked list.\n");
    printf("[2] for insert the node at end of linked list.\n");
    printf("[3] for insert the node in ascending order of linked list.\n");
    printf("[4] for delete the first node of linked list.\n");
    printf("[5] for delete the node before any index of linked list.\n");
    printf("[6] for delete the node after any index.\n");
    printf("[7] for exit from the linked list.\n");
    do
    {
        printf("Enter the choice : \n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("Enter the value of new node.\n");
            scanf("%d", &val);
            head = insert_at_front(head, val);
            display(head);
            break;
        case 2:
            printf("Enter the value of new node.\n");
            scanf("%d", &val);
            head = insert_at_end(head, val);
            display(head);
            break;
        case 3:
            printf("Enter the value of new node.\n");
            scanf("%d", &val);
            head = insert_in_ascending(head, val);
            display(head);
            break;
        case 4:
            head = delet_first(head);
            display(head);
            break;
        case 5:
            printf("Enter the positon.\n");
            scanf("%d", &index);
            head = delete_before(head, index);
            display(head);
            break;
        case 6:
            printf("Enter the positon.\n");
            scanf("%d", &index);
            head = delete_after(head, index);
            display(head);
            break;
        }
    } while (n != 7);
    return 0;
}
