#include<stdio.h>
#include<time.h>
void swap(int x,int y)
{
int t;
t = y;
y = x;
x = t;
printf("After swap a = %d and b = %d",x,y);
}
int main()
{
printf("Enrollment NO. :- 210130107011\n");
printf("Student Name :- Smit Rajani\n");
printf("Practical-1\n");
printf("Practical Aim :- Introduction to pointers. Call by Value and Call by reference.\n");
time_t my_time = time(NULL);
printf("Time :- %s\n",ctime(&my_time));
// Call by value
int a = 10 , b = 20;
printf("Before swap a = %d and b = %d\n",a,b);
swap(a,b);
return 0;
}
