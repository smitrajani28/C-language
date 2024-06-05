#include<stdio.h>

    int main()
    {
        int a=28, *p;
        p = &a;
        printf("the address of a is %u\n",p);
        printf("the value of a is %d\n",*p);
        return 0;
    }