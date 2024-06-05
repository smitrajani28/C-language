#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
struct node{
    int data;
    struct node *next;
};
struct node *head, *tail = NULL;

void addNode() {
  int data;
  printf("Enter value to insert:");
  scanf("%d",&data);
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    if(head == NULL) {
        head = newNode;
        tail = newNode;
    }

  else{
tail->next = newNode;
        tail = newNode;
    }
}
void display() {
    struct node *current = head;
    if(head == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("Nodes of singly linked list: \n");
    while(current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
void acse()
{
    if(head==NULL){
      printf("List is empty\n");
      return;
    }
    struct node *current = head,*index=NULL;
    int t;
    current=head;
    while(current!=NULL)
    {
      index=current->next;
      while(index != NULL){
      if(current->data > index->data)
        {
          t=current->data;
          current->data=index->data;
          index->data=t;
        }
        index=index->next;
      }
        current=current->next;
    }
  printf("Linked list sorted:\n");
  display();
}

void del(){
    if(head==NULL){
      printf("List is empty\n");
      return;
    }
    head=head->next;
    printf("Deleted successfully.\n");
    display();
}

void del_bef(){
  struct node* temp = head;
  int p,i;
  printf("Enter position to delete previous element:");
  scanf("%d", &p);
    if(p==1)
      printf("There is no element before %d position.",p);
    else if(p==2)
      head=head->next;
    else{
        for(i=0;i<p-3;i++)
          temp = temp->next;
        temp->next=temp->next->next;
    }

   printf("Deleted successfully.\n");
    display();
}
void del_aft(){
  struct node* temp = head;
  struct node* current = head;
  int p,c=0,i;
    while (current != NULL) {
        c++;
        current = current->next;
    }
    printf("Enter position to delete after element:");
    scanf("%d", &p);
    if(p>=c){
      printf("There is no element after %d position.",c);
      return;
    }
    else if(p==1)
      head->next=head->next->next;
    else{
        for(i=0;i<p-1;i++)
          temp = temp->next;
        temp->next=temp->next->next;
    }
    printf("Deleted successfully.\n");
    display();
}
void main()
{time_t tm; time(&tm);
  int ch;
  printf("Name: Smit Rajani\nEnrollment No.: 210130107011\nPractical 7:");
  printf("Write a menu driven program to implement\nfollowing operations on the singly linked list.\n");printf("%s\n",ctime(&tm));
  printf("1.INSERT  2.DISPLAY   3.SORT\n4.DELETE FISRT   5.DELETE BEFEORE   6.DELETE AFTER\n");
  do {
    printf("\nEnter choice:");
    scanf("%d",&ch);
    switch (ch) {
      case 1: addNode();
            break;
      case 2: display();
            break;
      case 3: acse();
            break;
      case 4: del();
            break;
      case 5: del_bef();
            break;
      case 6: del_aft();
            break;
      default:exit(0);
    }
  } while(ch);
}
