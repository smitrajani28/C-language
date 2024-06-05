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

int partition(int a[], int low, int high)
{

    int pivot = a[low];
    int i, temp;
    int j;
    i = low + 1;
    j = high;
    do
    {
        while (a[i] <= pivot)
        {
            i++;
        }

        while (a[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);

    temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;         
}

int quicksort(int a[], int low, int high)
{
    int partitionindex;
    if (low < high)
    {
        partitionindex = partition(a, low, high);

        quicksort(a, low, partitionindex - 1);
        quicksort(a, partitionindex + 1, high);
    }
}

int main()
{
    
    printf("Enrollment NO. :- 210130107011\n");
    printf("Student Name :- Smit Rajani\n");
    printf("Practical-14\n");
    printf("Practical Aim: Write a program to implement Quick Sort\n");
    time_t my_time = time(NULL);
    printf("Time :- %s\n", ctime(&my_time)); 
    
    int a[] = {20, 8, 4, 3, 10, 15, 45, 85, 95, 100};
    int n = 10;
    printarry(a, n);
    quicksort(a, 0, n - 1);
    printarry(a, n);

    return 0;
}



   