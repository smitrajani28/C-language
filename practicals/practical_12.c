#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root= NULL;
struct node* new_node(int data){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data= data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}
void insert() {
  int data;
  printf("Enter value:");
  scanf("%d",&data);
    struct node *newNode = new_node(data);

    if(root == NULL){

        root = newNode;
       return;
      }
    else {
        struct node *current = root, *parent = NULL;
        while(true) {
            parent = current;
            if(data < current->data) {
                current = current->left;
                if(current == NULL) {
                    parent->left = newNode;
                    return;
                }
            }
            else {
                current = current->right;
                if(current == NULL) {
                    parent->right = newNode;
                    return;
                }
            }
        }
    }
}
void display(struct node *ptr){
  if(root == NULL){
        printf("Tree is empty\n");
          return;
     }
    else {
      if(ptr->left!= NULL)
        display(ptr->left);
      printf("%d ", ptr->data);
      if(ptr->right!= NULL)
        display(ptr->right);
    }
}
int main()
{time_t tm;  time(&tm);
    int ch;
    printf(" Name: Marmik Shah\nEnrollment No.: 210130107020\nPractical 12: ");
    printf("Write a program which creates a binary search tree.\n");
printf("%s\n",ctime(&tm));
    printf("1.INSERT  2.SHOW  3.EXIT");
    do{
      printf("\nEnter your choice:");
      scanf("%d",&ch);
        switch(ch)
        {
          case 1: insert();
               break;
          case 2: display(root);
                  printf("\n");
               break;
          default: printf("Please Enter valid choice ");
    };
  }while(ch != 6);

 return 0;
}
