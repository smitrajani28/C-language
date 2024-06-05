#include <stdio.h>

int main()
{
    int fact = 1, i, n;
    printf("enter number which do you want factorial :");
    scanf("%d", &n);
    if (n == 1 || n == 0)
    {
        printf("factorial of %d is 1",n);
    }
    else
    {
        for (i = n; i > 0; i--)
        {
            fact *= i;
        }
        printf("factorial of %d is %d",n,fact);
    }

    return 0;
}