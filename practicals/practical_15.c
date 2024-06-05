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

void merge(int a[], int low, int mid, int high)
{

    int i, j, k, b[200];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            i++;
            k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
     while (i<=mid)
    {
        b[k]=a[i];
        i++;
        k++;
    }

    while (j<=high)
    {
        b[k]=a[j];
        j++;
        k++;
    }

    for (int i = low; i <= high; i++)
    {
        a[i]=b[i];
    }
}

   

void mergesort(int a[],int low,int high){
      
     int mid;
     if (low<high)
     { 
        mid =(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
     }
}   
    
int main()
{
    printf("Enrollment NO. :- 210130107011\n");
    printf("Student Name :- Smit Rajani\n");
    printf("Practical-15\n");
    printf("Practical Aim: Write a program to implement Merge Sort\n");
    time_t my_time = time(NULL);
    printf("Time :- %s\n", ctime(&my_time)); 

    int a[] = {20, 8, 4, 3, 10, 15, 45, 85, 95, 100};
    int n = 10;
    printarry(a, n);
    mergesort(a, 0, 9);
    printarry(a, n);

    return 0;
}