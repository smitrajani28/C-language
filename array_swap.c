#include <stdio.h>
void swap(int *arr, int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    printf("\nelement after swaping :");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}
int main()
{
    int array[10];
    int n;
    printf("enter the number of element :");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter %d element :",i+1);
        scanf("%d", &array[i]);
    }
    printf("element before swaping :");
    for (int i = 0; i < n; i++)
    {
        printf("%d", array[i]);
    }
    swap(array,n);
    return 0;
}