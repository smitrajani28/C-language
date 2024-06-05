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
    int *ptr, *ptr1;
    int n, i;
    printf("Enter the number of element ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    ptr1 = (int *)calloc(n, sizeof(int));
    if (ptr == NULL || ptr1 == NULL)
    {
        printf("Memory is not allocated to pointer.\n");
    }
    else
    {
        printf("Memory is allocated successfully using malloc.\n");
        free(ptr);
        printf("Malloc memory successfully free.\n");
        printf("Memory is allocated successfully using calloc.\n");
        free(ptr1);
        printf("Calloc memory successfully free.\n");
    }
    return 0;
}
