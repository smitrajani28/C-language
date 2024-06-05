#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    printf("Enrollment NO. :- 210130107011\n");
    printf("Student Name :- Smit Rajani\n");
    printf("Practical-2\n");
    printf("Practical Aim :- Introduction to Dynamic Memory Allocation. DMA functions malloc(), calloc(), free() etc.\n");
    time_t my_time = time(NULL);
    printf("Time :- %s\n", ctime(&my_time));
    int *ptr;
    int n, i;
    printf("Enter the number of element : ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory is not allocated to pointer.\n");
    }
    else
    {
        printf("Memory is allocated successfully using malloc.\n");
        for (i = 0; i < n; i++)
        {
            ptr[i] = i + 1;
        }
        printf("The elements of the array is : ");
        for (i = 0; i < n; i++)
        {
            printf("%d, ", ptr[i]);
        }
    }
    return 0;
}
