#include<stdio.h>

    int main()
    {
        int student = 3;
        int subject = 3;
        int marks[3][3];
        for (int i = 0; i < student; i++)
        {
            for (int j = 0; j < subject; j++)
            {
                if (j==0)
                {
                    printf("Enter marks of student %d in Maths :\n",i+1);
                }
                else if (j==1)
                {
                    printf("Enter marks of student %d in Science :\n",i+1);
                }
                else if (j==2)
                {
                    printf("Enter marks of student %d in English :\n",i+1);
                }
                scanf("%d",&marks[i][j]);
            }
            
        }
        printf("Name          Maths  Science  English\n");
       for (int i = 0; i < student; i++)
        {
            if (i==0)
                {
                    printf("student 1");
                }
                else if (i==1)
                {
                    printf("student 2");
                }
                else if (i==2)
                {
                    printf("student 3");
                }
            for (int j = 0; j < subject; j++)
            {
                printf("       %d",marks[i][j]);
            }
            printf("\n");
        }
        return 0;
    }