#include<stdio.h>

    int sum(int a,int b)
    {
        int result;
        result = a + b;
        return result;
    } 
    int main()
    {
        int a,b;
        printf("enter the value :");
        scanf("%d %d",&a,&b);
        printf("the sum of two variable : %d",sum(a,b));
        return 0;
    }