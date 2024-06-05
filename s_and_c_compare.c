#include<stdio.h>
#include<string.h>

// failed.........................
    int main()
    {
        char st1[10], st2[10];
        char c;
        int i=0;
        printf("Enter string for st1 :");
        scanf("%s",st1);
        printf("Enter string for st2 character by character :");
        while (c!='\n')
        {
            fflush(stdin);
            scanf("%c",&c);
            st2[i] = c;
            i++;
        }
        st2[i-1] = '\0';
        printf("%s || %s \n",st1,st2); 
        i = strcmp(st1,st2);
        printf("%d",i);
        return 0;
    }