#include<stdio.h>
#include<time.h>
typedef struct dnt
{
    int year;
    int month;
    int day;
    int h,m;
} datetime;

    int main()
    {
        time_t b=time(NULL);
        printf("%s\n",ctime(&b));
        
        datetime a={2023,01,23,05,50};
        printf("%d/%d/%d/ %d:%d",a.year,a.month,a.day,a.h,a.m);
        return 0;
    }