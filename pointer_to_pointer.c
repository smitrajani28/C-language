#include<stdio.h>

    int main()
    {
        int a=10, *p, **q;
        p = &a;
        q = &p;
        printf("The value of a is %d",**q);
        return 0;
    }