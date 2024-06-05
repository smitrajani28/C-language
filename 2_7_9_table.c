#include<stdio.h>

    int main()
    {
        for (int i = 0; i < 10; i++)
        {
            if (i==0)
            {
                printf("2 x %d  = %d    7 x %d  = %d    9 x %d  = %d\n",i+1,2*(i+1),i+1,7*(i+1),i+1,9*(i+1));
            }
            else if (i<4)
            {
                printf("2 x %d  = %d    7 x %d  = %d   9 x %d  = %d\n",i+1,2*(i+1),i+1,7*(i+1),i+1,9*(i+1));
            }
            else if (i<9)
            {
                printf("2 x %d  = %d   7 x %d  = %d   9 x %d  = %d\n",i+1,2*(i+1),i+1,7*(i+1),i+1,9*(i+1));
            }
            else
            {
                printf("2 x %d = %d   7 x %d = %d   9 x %d = %d\n",i+1,2*(i+1),i+1,7*(i+1),i+1,9*(i+1));
            }
            
            
            
            
        }
        
        return 0;
    }