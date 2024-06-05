#include <stdio.h>

void pos_neg(int *arr,int n)
{
    int positive = 0, negitive = 0,zero=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>0)
        {
            positive++;
        }
        else if (arr[i]<0)
        {
            negitive++;
        }
        else
        {
            zero++;
        }
    }
    printf("there are\n positives = %d \n negatives = %d \n zeros = %d",positive,negitive,zero);
}
int main()
{
    int num[10];
    int n;
    printf("Enter amount of number :");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter %d number :", i + 1);
        scanf("%d", &num[i]);
    }
    pos_neg(num,n);
    return 0;
}