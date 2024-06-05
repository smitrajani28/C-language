#include<stdio.h>

    int main()
    {
        int n,sum=0;
        printf("enter term for sum :");
        scanf("%d",&n);
        for (int i = 1; i <= n; i++)
        {
            sum += i;
        }
        printf("sum of term %d(1 to %d) : %d",n,n,sum);
        return 0;
    }