#include<stdio.h>
#include<stdlib.h>
    int main()
    {
        int *ptr,n;
        printf("enter blocks do you want :");
        scanf("%d",&n);
        ptr=(int *)calloc(n, sizeof(int));
        for (int i = 0; i < n; i++)
        {
            printf("enter %d element ;\n",i+1);
            scanf("%d",&ptr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d element is %d\n",i+1,ptr[i]);
        }
        return 0;
    }