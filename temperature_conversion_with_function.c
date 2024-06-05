#include<stdio.h>
float temperature(float x)
{
    return (9*x)/5+32;
}
    int main()
    {
        float x;
        printf("enter the temperature in celsius to convert into farenheit :\n");
        scanf("%f",&x);
        printf("value in farenheit is %.2f",temperature(x));
        return 0;
    }