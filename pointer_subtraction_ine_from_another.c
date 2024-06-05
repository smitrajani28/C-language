#include<stdio.h>

    int main()
    {
        //failed.................
        int a=10,b=20,*p,*q,*r;
        p = &a;
        q = &b;
        printf("the value of p before subtraction : %u\n",p);
        printf("the value of q before subtraction : %u\n",q);
        r = p - q;
        printf("the value of p after subtraction : %u\n",r);
        return 0;
    }