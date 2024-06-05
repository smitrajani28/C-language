
// 1st type of program***2D Array*******************************************************************
/*
#include<stdio.h>
void address(int *array,int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ",array++);
        }
        printf("\n");   
    }
    
}
    int main()
    {
        int m;
        printf("Enter  the size of array as square matrix :");
        scanf("%d",&m);
        int array[m][m];
        address(&array[m][m],m);
        return 0;
    }
*/
//**************************************************************************************************

// 2nd type of program***3D array*******************************************************************
/*
#include<stdio.h>

    int main()
    {
        int m;
        printf("Enter  the size of array as square matrix :");
        scanf("%d",&m);
        int array[m][m];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                printf("the address of array [%d][%d] is %d\n",i,j,&array[i][j]);
            }
            
        }
        return 0;
    }
*/
//**************************************************************************************************