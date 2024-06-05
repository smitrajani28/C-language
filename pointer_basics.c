#include<stdio.h>

    int main()
    {
        int i;
        printf("Enter value :");
        scanf("%d",&i);
        int *j;
        j = &i;
        printf("value of i : %d \n",i);
        printf("value of i : %d \n",*j);
        printf("Address of i : %u \n",&i);
        printf("Address of i : %u \n",j);
        printf("Adrress of j : %u \n",&j);
        printf("value of j : %d \n",*(&j));
        return 0;
    }