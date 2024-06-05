#include<stdio.h>

    int main()
    {
        float p,r,n,i;
        printf("enter principle amount:");
        scanf("%f",&p);
        printf("enter rate of interest:");
        scanf("%f",&r);
        printf("enter no. of years:");
        scanf("%f",&n);
        i=p*r*n/100;
        printf("simple interest is %f",i);
        return 0;
    }