#include<stdio.h>
void sumandavg(int a,int b,int *sum,float *avg)
{
    *sum = a + b;
    *avg = *sum/2;
}
    int main()
    {
        int a,b,sum;
        float avg;
        a=10;
        b=20;
        sumandavg(a,b,&sum,&avg);
        printf("the sum of given number is %d and avg is %.2f",sum,avg);
        return 0;
    }