#include<stdio.h>
void slice(char *str, int m,int n)
{   int i=0;
    while ((m+i)<=n)
    {
        str[i] = str[m+i-1];
        i++;
    }
    str[i] = '\0';
}
    int main()
    {
        char st[50]; 
        int m,n;
        printf("enter a string : ");
        gets(st);
        printf("Enter stat slicing point :");
        scanf("%d",&m);
        printf("Enter end slicing point :");
        scanf("%d",&n);
        slice(st, m, n);
        printf("%s",st);
        return 0;
    }