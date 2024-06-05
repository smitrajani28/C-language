#include<stdio.h>
#include<stdlib.h>
#include<time.h>
char computer()
{
    int number;
    char comp; 
    srand(time(0));
    number = rand()%100 + 1;
    if (number<33)
    {
        comp='s';
    }
    else if (number>33 && number<66)
    {
        comp='w';
    }
    else
    {
        comp='g';
    } 
    return comp;
}
int compare(char you,char comp)
{
    if (you==comp)
    {
        return 0;
    }
    if (you=='s' && comp=='w')
    {
        return 1;
    }
    else if (you=='w' && comp=='s')
    {
        return -1;
    }
    if (you=='s' && comp=='g')
    {
        return -1;
    }
    else if (you=='g' && comp=='s')
    {
        return 1;
    }
    if (you=='w' && comp=='g')
    {
        return 1;
    }
    else if (you=='g' && comp=='w')
    {
        return -1;
    } 
}  
    int main()
    {
        int result;
        char you,comp;
        comp = computer();
        printf("Enter s for snake,w for water and g for gun :");
        scanf("%c",&you);
        result = compare(you,comp);
        printf("you choose %c and comp choose %c \n",you,comp);
        if (result == 0)
        {
            printf("game Draw......!");
        }
        else if (result == 1)
        {
            printf("you win......!");
        }
        else
        {
            printf("you loose......!");
        }
        
        
        
        return 0;
    }