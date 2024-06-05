#include<stdio.h>
void multi(int *x)
{
    *x = *x * 10;
}
    int main()
    {
        int a=10;
        printf("The value before use of function : %d\n",a);
        multi(&a);
        printf("The value after use of function : %d\n",a);
        return 0;
    }