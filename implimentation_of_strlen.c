#include <stdio.h>
int strlen(char * st)
{
    char *ptr = st;
    int len = 0;
    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }
    return len;
}
int main()
{
    char str[50];
    int l;
    printf("Enter any string :");
    gets(str);
    l = strlen(str);
    printf("the length of string is %d", l);
    return 0;
}