#include<stdio.h>
typedef struct vector
{
    float x;
    float y;
} vr;
    int main()
    {
        vr v1={10,20};
        vr *ptr;
        ptr= &v1; 
        printf("x: %f  y: %f \n",(*ptr).x,(*ptr).y);
        printf("x: %f  y: %f \n",ptr->x,ptr->y);
        return 0;
    }