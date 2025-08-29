#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, lower = 0, upper = 100;
    int number_of_guess = 0, guessed;

    srand(time(0));
    number = rand() % (upper - lower + 1) + lower;

    do
    {
        printf("Guess the number between 0 to 100 = ");
        scanf("%d", &guessed);
        if (guessed > number)
        {
            printf("Lower the number!\n");
        }
        else if (guessed < number)
        {
            printf("Higher the number!\n");
        }
        number_of_guess++;
    } while (guessed != number);
    printf("Congrats you guessed the right number!\n");
    printf("Your number of guesses is %d\n", number_of_guess);

    return 0;
}