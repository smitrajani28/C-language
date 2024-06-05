#include<stdio.h>
void add(int a)
{
    printf("other address is %u\n",&a);
}
    int main()
    {
        int a = 28;
        printf("one of the address is %u\n",&a);
        add(a);
        return 0;
    }