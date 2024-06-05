#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *create(struct node *head)
{
    head = NULL;
    return head;
}
struct node *insert_at_front(struct node *head)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    int n;
    if (temp == NULL)
        printf("Memory was not allocted.\n");
    else if (head == NULL)
    {
        printf("Enter the value : \n");
        scanf("%d", &n);
        temp->data = n;
        temp->next = NULL;
        temp->prev = NULL;
        head = temp;
    }
    else
    {
        printf("Enter the value : \n");
        scanf("%d", &n);
        temp->data = n;
        temp->next = head;
        head->prev = temp;
        temp->prev = NULL;
        head = temp;
    }
    printf("The node is successfully inserted.\n");
    return head;
}
struct node *insert_at_end(struct node *head)
{
    int n;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    if (temp == NULL)
        printf("Memory was not allocated.\n");
    else
    {
        printf("Enter the value : ");
        scanf("%d", &n);
        if (temp == NULL)
        {
            temp->data = n;
            temp->next = NULL;
            temp->prev = NULL;
            head = temp;
        }
        else
        {
            while (p->next != NULL)
            {
                p = p->next;
            }

            temp->data = n;
            temp->next = NULL;
            temp->prev = p;
            p->next = temp;
        }
    }
    return head;
}
struct node *delete_last_node(struct node *head)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    if (head == NULL)
        printf("Memory was not allocated.\n");
    else if (p->next == NULL)
    {
        head = NULL;
        free(head);
    }
    else
    {
        while (p->next != NULL)
        {
            p = p->next;
        }
        temp = p;
        p->prev->next = NULL;
        printf("Deleted node is : %d \n", temp->data);
        free(temp);
    }
    return head;
}
struct node *delete_at_specified_pos(struct node *head)
{
    struct node *temp = head->next;
    struct node *p = head;
    int pos;
    printf("Enter the position : ");
   
    scanf("%d", &pos);
    if (head == NULL)
        printf("Memory was not allocated.\n");
    else
    {
        for (int i = 1; i < pos - 1; i++)
        {
            p = p->next;
            temp = temp->next;
        }
        p->prev->next = temp;
        temp->prev = p->prev;
        free(p);
    }
    return head;
}
void display(struct node *head)
{
    struct node *temp = head;
    if (head == NULL)
        printf("Memory was not allocated to the head.\n");
    else
    {
        printf("Linked List : ");
        while (temp->next != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("%d", temp->data);
        printf("%d", temp->data);
        printf("\n");
    }
}
int main()
{

    printf("Enrollment NO. :- 210130107011\n");
    printf("Student Name :- Smit Rajani\n");
    printf("Practical-10\n");
    time_t my_time = time(NULL);
    printf("Time :- %s\n", ctime(&my_time));
    
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head = create(head);
    int n;
    printf("[1] for insert a node at front.\n");
    printf("[2] for insert a node at end\n");
    printf("[3] for delete a node from the end.\n");
    printf("[4] for delete a node at index before.\n");
    printf("[5] for display.\n");
    printf("[6] for exit.\n");
    do
    {
        printf("Enter your choice : ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            head = insert_at_front(head);
            break;
        case 2:
            head = insert_at_end(head);
            break;
        case 3:
            head = delete_last_node(head);
            break;
        case 4:
            head = delete_at_specified_pos(head);
            break;

        case 5:
            display(head);
        }
    } while (n != 6);
    return 0;
}