#include<stdio.h>
void pointerarray(int *ptr,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("the marks of student %d is %d\n",i+1,*(ptr+i));
    }
    
}
    int main()
    {
        int marks[]={1,2,3,4,5,6,7,8,9,10};
        pointerarray(marks, 10);
        return 0;
    }