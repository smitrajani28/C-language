#include<stdio.h>

    int main()
    {
        int radius,hight;
        float pi=3.14;
        printf("enter the radius of circle:");
        scanf("%d",&radius);
        printf("enter the hight of circle:");
        scanf("%d",&hight);
        printf("volume of circle is %.3f",pi*radius*radius*hight);
        return 0;
    }