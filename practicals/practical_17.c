#include <stdio.h>
#include <malloc.h>
#include <time.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void inOrder(struct node *root)
{

    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

int IsBST(struct node *root)
{
    static struct node *pre = NULL;

    if (root != NULL)
    {
        if (!IsBST(root->left))
        {
            return 0;
        }

        if (pre != NULL && root->data <= pre->data)
        {
            return 0;
        }
        pre = root;
        return IsBST(root->right);
    }
    else
    {
        return 1;
    }
}

int main()
{

    printf("Enrollment NO. :- 210130107011\n");
    printf("Student Name :- Smit Rajani\n");
    printf("Practical-17\n");
    printf("Practical Aim: Write a program to implement Binary Search.\n");
    time_t my_time = time(NULL);
    printf("Time :- %s\n", ctime(&my_time));

    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(9);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    inOrder(p);
    printf("\n");
    if (IsBST(p))
    {
        printf("yes,It is BTS\n");
    }
    else
    {
        printf("no,It's not BTS");
    }

    return 0;
}
