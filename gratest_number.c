#include <stdio.h>

int main()
{
    // program o find gratest number
    int a[4], max = 0;
    for (int i = 0; i < 4; i++)
    {
        switch (i)
        {
        case 0:
        {
            printf("enter 1st number :");
            break;
        }
        case 1:
        {
            printf("enter 2nd number :");
            break;
        }
        case 2:
        {
            printf("enter 3rd number :");
            break;
        }
        case 3:
        {
            printf("enter 4th number :");
            break;
        }
        default:
            break;
        }
        scanf("%d", &a[i]);
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("greatest number is %d", max);
    return 0;
}