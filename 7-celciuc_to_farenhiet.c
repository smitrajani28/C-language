#include<stdio.h>

    int main()
    {
        float c,f;
        printf("enter temperature in celcius:");
        scanf("%f",&c);
        f=(9*c/5)+32;
        printf("temperature in farenhiet is %.3f",f);
        return 0;
    }