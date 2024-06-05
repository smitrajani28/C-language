#include <stdio.h>

int main()
{
    int n, i, count = 0;
    printf("enter a number :");
    scanf("%d", &n);
    if (n > 1)
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }
        if (count == 0)
        {
            printf("the number %d is prime", n);
        }
        else
        {
            printf("the number %d is not prime", n);
        }
    }
    else 
    {
         printf("the number %d is not prime",n);
    }
    return 0;
}