#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
    int main()
    {
        int x=3,y=4;
        printf("value of x and y before swap is %d & %d\n",x,y);
        swap(&x,&y);
        printf("value of x and y after swap is %d & %d\n",x,y);
        return 0;
    }