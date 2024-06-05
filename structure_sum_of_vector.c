#include<stdio.h>
typedef struct vec
{
    float x;
    float y;
} vector;

void sum(vector vec1 ,vector vec2)
{
    vector v3={0,0};
    v3.x= vec1.x + vec2.x;
    v3.y= vec1.y + vec2.y;
    printf("%f %f",v3.x,v3.y);
}
    int main()
    {
        vector v1;
        vector v2;
        printf("Enter a value of v1 vector in term of x y :");
        scanf("%f %f",&v1.x,&v1.y);
        printf("Enter a value of v2 vector in term of x y :");
        scanf("%f %f",&v2.x,&v2.y);
        // printf("%f %f \n%f %f",v1.x,v1.y,v2.x,v2.y);
        sum(v1,v2);
        return 0;
    }