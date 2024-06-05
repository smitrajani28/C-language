#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct stack
{
    int size;
    int *arr;
    int top;
} S;
int isEmpty(S *s)
{
    if (s->top == -1)
        return 1;
    else
        return 0;
}
int isFull(S *s)
{
    if (s->top == (s->size - 1))
        return 1;
    else
        return 0;
}
void push(S *s, int element)
{
    if (isFull(s))
        printf("Stack is Full\n");
    else
    {
        s->top++;
        s->arr[s->top] = element;
    }
}
void pop(S *s)
{
    if (isEmpty(s))
        printf("Stack is Empty\n");

    else
    {
        printf("Poped element is %d : \n", s->arr[s->top]);
        s->top--;
    }
}
void printstack(S *s)
{
    printf("Stack: ");
    for (int i = 0; i <= s->top; i++)
    {
        printf("%d ", s->arr[i]);
    }
    printf("\n");
}
void peep(S *s, int index)
{
    if (s->top < index)
        printf("stack is overflow.\n");
    else
        printf("The element at index %d is %d\n", index, s->arr[index]);
}
void change(S *s, int index, int val)
{
    if (s->top < index)
        printf("stack is overflow.\n");
    else
    {
        printf("changing the value at index %d into %d \n", index, val);
        s->arr[index] = val;
    }
}
int main()
{
    S *s;
    int element, num;
    s = (S *)malloc(sizeof(S));
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    printf("Enrollment NO. :- 210130107011\n");
    printf("Student Name :- Smit Rajani\n");
    printf("Practical-3\n");
    printf("Practical Aim :- Implement a program for stack that performs the following operationsusing arrays. \n (a) PUSH (b) POP (c) PEEP (d) CHANGE (e) DISPLAY \n");
    time_t my_time = time(NULL);
    printf("Time :- %s\n", ctime(&my_time));
    printf("pushhing element directly to the stack.\n");
    push(s, 4);
    push(s, 5);
    push(s, 6);
    push(s, 7);
    push(s, 8);
    printstack(s);
    pop(s);
    printstack(s);
    peep(s, 1);
    peep(s, 2);
    change(s, 2, 60);
    printstack(s);
    return 0;
}
