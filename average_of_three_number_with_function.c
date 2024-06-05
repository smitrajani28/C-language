#include<stdio.h>
float average(float x, float y, float z)
{
    return (x+y+z)/3;
}
    int main()
    {
        int x,y,z;
        printf("Enter three value to find average :");
        scanf("%d %d %d",&x,&y,&z);
        printf("The average of given nuber is %f",average(x,y,z));
        return 0;
    }