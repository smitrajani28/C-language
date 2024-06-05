#include<stdio.h>

    int main()
    {
        int n,i;
        printf("enter the number which's table do you want :");
        scanf("%d",&n);
        for ( i = 01; i <= 10; i++)
        {
           printf("%d ",n);
           printf("%d ",i);
           printf("%d \n",n*i);
        }
        
        return 0;
    }