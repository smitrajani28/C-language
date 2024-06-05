#include<stdio.h>
void present(char *st,char c)
{   
    int count = 0; 
    while (*st !='\0')
    {
        if (*st == c)
        {
            count++;
        }
        st++;
    }
    if (count!=0)
    {
        printf("character exists in sentance");
    }
    else
    {
        printf("character doesn't exist in sentance");
    }
    
    
}
    int main()
    {
        char st[50],c;
        printf("Enter a sentance :");
        gets(st);
        printf("Enter character which you want to find it's existance :");
        scanf("%c",&c);
        present(st, c);
        return 0;
    } 
