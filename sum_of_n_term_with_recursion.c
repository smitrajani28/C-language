#include<stdio.h>
int sum(int n)
{
    if (n>0)
    {
        return n + sum(n-1);
    }
}
    int main()
    {
        int n;
        printf("Enter the term for sum of first n term :");
        scanf("%d",&n);
        printf("the sum of first %d term is %d",n,sum(n));
        return 0;
    }