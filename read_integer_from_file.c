#include<stdio.h>

    int main()
    {
        int a,n;
        FILE *ptr;
        ptr= fopen("integer.txt","r");
        printf("enter limit:");
        scanf("%d",&n);
        for (int i = 0; i < n; i++)
        {
            fscanf(ptr, "%d", &a);
            printf("%d ",a);
        }
        
        return 0;
    }