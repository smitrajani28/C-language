#include<stdio.h>

    int main()
    {   char name[50];
        int n,salary;
        FILE *ptr;
        ptr = fopen("salary.txt","w");
        printf("Enter number of data :");
        scanf("%d",&n);
        for (int i = 0; i < n; i++)
        {
            printf("Enter the name of %d emloyee:",i+1);
            scanf("%s",name);
            printf("Enter the salary of %s :",name);
            scanf("%d",&salary);
            fprintf(ptr, "%s, %d\n",name,salary);
        }
        fclose(ptr);
        return 0;
    }