#include<stdio.h>
float force(float mass)
{
    return mass * 9.8;
}
    int main()
    {
        float mass;
        printf("Enter a mass of object in Kgs:");
        scanf("%f",&mass);
        printf("force experienced by an object is %.2f",force(mass));
        return 0;
    }