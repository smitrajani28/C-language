#include <stdio.h>
struct student
{
    int enrollment;
    char name[50];
    int total;
};

int main()
{
    struct student no[50];
    int n;
    printf("Enter the no. of students :");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the enrollment no. of %d student :", i+1);
        scanf("%d", &no[i].enrollment);
        printf("Enter the Name of %d student :", i+1);
        scanf("%s",no[i].name);
        printf("Enter the total marks of %d student :", i+1);
        scanf("%d", &no[i].total);
    }
    printf("no    En No.     Name    marks\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d        %d       %s       %d\n", i + 1, no[i].enrollment, no[i].name, no[i].total);
    }

    return 0;
}