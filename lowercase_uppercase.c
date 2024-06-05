#include<stdio.h>

    int main()
    {
        char ch;
        printf("enter character :");
        scanf("%c",&ch);
        if (ch>=65 && ch<=90)
        {
            printf("character %c is in UPPERCASE",ch);
        }
        else if (ch>=97 &&ch<=122)
        {
           printf("character %c is in lowercase",ch);
        }
        else
        {
            printf("character %c isn't in UPPERCASE nor lowercase",ch);
        }
        
        
        return 0;
    }