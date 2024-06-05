#include <stdio.h>

int main()
{
    // hello coder, this the program to check a year which is leap year or not!!
    int year;
    printf("Enter a year do you want to check :");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
       printf("The year %d is leap year",year);
       /* if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("The year %d is leap year",year);
            }
            else
            {
                printf("The year %d is not leap year",year);
            }
        }
        else
        {
            printf("The year %d is leap year",year);
        }*/
    }
    else
    {
        printf("The year %d is not leap year",year);
    }

    return 0;
}