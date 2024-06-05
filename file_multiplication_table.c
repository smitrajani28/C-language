#include<stdio.h>

    int main()
    {
        int a;
        FILE *ptr;
        ptr = fopen("table.txt","w");
        printf("Enter the No. of table:");
        scanf("%d",&a);
        for (int i = 0; i < 10; i++)
        {
            fprintf(ptr, "%d %d %d\n", a, i+1, a*(i+1));
        }
        fclose(ptr);
        return 0;
    }