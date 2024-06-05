#include<stdio.h>

    int main()
    {
        int n;
        printf("enter term for natureal number : ");
        scanf("%d",&n);
        for (int i = 0; i < n; i++)
        {
            printf("%d \n",i+1);
        }
        
        return 0;
    }