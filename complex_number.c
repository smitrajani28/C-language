#include<stdio.h>
typedef struct com
{
    float x;
    float y;
} complex;

    int main()
    {   
        int n;
        complex arr[10];
        printf("enter size of complex number do you want to store(maximum 10):");
        scanf("%d",&n);
        printf("now enter a whole complex (separate real and imaginary with space and separate a whole number by pressing enter):");
        for (int i = 0; i < n; i++)
        {
            scanf("%f %f",&arr[i].x,&arr[i].y);
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d. %.1f + (%.1f i)  \n",i+1,arr[i].x,arr[i].y);
        }    
        return 0;
    }