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
void preOrder(struct node *root)
{

    if (root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct node *root)
{

    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
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
int main()
{

    printf("Enrollment NO. :- 210130107011\n");
    printf("Student Name :- Smit Rajani\n");
    printf("Practical-13\n");
    printf("Implement recursive and non-recursive tree traversing methods inorder, preorder and post-order traversal.\n");
    time_t my_time = time(NULL);
    printf("Time :- %s\n", ctime(&my_time));

    struct node *p = createNode(4);
    struct node *p1 = createNode(1);
    struct node *p2 = createNode(5);
    struct node *p3 = createNode(2);
    struct node *p4 = createNode(6);

    p->left = p1;
    p->right = p4;
    p1->left = p2;
    p1->right = p3;

    printf("Traversal in perorder\n");
    preOrder(p);
    printf("\n");
    printf("Traversal in postorder\n");
    postOrder(p);
    printf("\n");
    printf("Traversal in inorder\n");
    inOrder(p);

    return 0;
}
