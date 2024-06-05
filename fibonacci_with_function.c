#include<stdio.h>
void fibonacci(int n)
{
    int a=0,b=1,temp;
    printf("%d, %d",a,b);
    for (int i = 0; i < n-2 ; i++)
    {
        temp = a+b;
        a=b;
        b=temp;
        printf(", %d",temp);
    }
}
    int main()
    {
        int n;
        printf("enter term for fibonacci series :");
        scanf("%d",&n);
        fibonacci(n);
        return 0;
    }