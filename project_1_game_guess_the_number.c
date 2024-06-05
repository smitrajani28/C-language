#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// this is program which is a game.
// a guessing game.
// guess the number which is automatically generayed by machine.
// this program will tell whatever you guessed is correct or lower or grater than right one.
// ask for greater of less number than your assumption.
// so try it.
int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    //  printf("%d\n",number);
    do
    {
        printf("guess the number between 1 to 100 :");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("lower number please...!!!\n\n");
        }
        else if (guess < number)
        {
            printf("higher number please...!!!\n\n");
        }
        else
        {
            printf("you guessed it in %d attempts\n\n", nguesses);
        }
        nguesses++;
    } while (guess != number);

    return 0;
}