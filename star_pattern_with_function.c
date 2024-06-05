#include<stdio.h>
void star(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < (2*i-1); j++)
    {
        printf("*");
    }
    printf("\n");
    }
    
}
    int main()
    {
        int n;
        printf("Enter number of line for star pattern :"); 
        scanf("%d",&n);
        star(n);
        return 0;
    }