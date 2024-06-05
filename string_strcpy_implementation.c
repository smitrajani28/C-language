#include<stdio.h>
void stringcpy(char *st1, char *st2)
{
    int i=0,j=0;
    while (st1[i] != '\0')
    {
        i++;
    }
    while (st2[j] != '\0')
    {
        st1[i] = st2[j];
        i++;
        j++;
    }
    st1[i] = '\0';
    
}
    int main()
    {
        char str1[50],str2[50];
        printf("Enter string which is target :");
        gets(str1);
        printf("Enter another string that would paste to first one :");
        gets(str2);
        stringcpy(str1,str2);
        printf("%s",str1);
        return 0;
    }