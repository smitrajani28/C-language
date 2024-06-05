#include <stdio.h>
#include <time.h>

void printarry(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void bubblesort(int a[], int n)
{
    int temp;

    for (int i = 0; i < n - 1; i++) 
        {
        printf("Number of the passes is %d\n", i + 1);
        for (int j = 0; j < n - 1 - i; j++) 
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void bubblesortadaptive(int a[], int n)
{
    int temp;
    int issorted = 0;

    for (int i = 0; i < n - 1; i++) 
    {
        printf("Number of the passes is %d\n", i + 1);
        issorted = 1;
        for (int j = 0; j < n - 1 - i; j++) 
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;

                issorted = 0;
            }
        }
        if (issorted)
            return;
    }
}

int main()
{   
     
    printf("Enrollment NO. :- 210130107011\n");
    printf("Student Name :- Smit Rajani\n");
    printf("Practical-16\n");
    printf("Practical Aim: Write a program to implement Bubble Sort\n");
    time_t my_time = time(NULL);
    printf("Time :- %s\n", ctime(&my_time)); 
        
    int a[]={111,22,3,454,756,666,777};
    int n = 6;
    printarry(a, n);
    bubblesort(a, n); 
    printarry(a, n);
    return 0;
}