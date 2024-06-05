#include<stdio.h>
int factorial(int x)
{
    if (x==1 || x==0)
    {
        return 1;
    }
    else
    {
        return x * factorial(x-1);
    }   
}
    int main()
    {
        int a;
        printf("enter the value for factorial :");
        scanf("%d",&a);
        printf("the factorial of %d is %d",a,factorial(a));
        return 0;
    }