#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secretNumber;
    int guess;
    int attempts;
    int maxAttempts;
    int found;

    srand(time(0));

    secretNumber = rand() % 100 + 1;
    attempts = 0;
    maxAttempts = 5;
    found = 0;

    printf("Welcome to the Number Guessing Game\n");
    printf("Guess a number between 1 and 100\n");
    printf("You have 5 attempts\n");

    while (attempts < maxAttempts)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts = attempts + 1;

        if (guess == secretNumber)
        {
            printf("Congratulations! You guessed the correct number.\n");
            printf("Number of attempts taken: %d\n", attempts);
            found = 1;
            break;
        }
        else
        {
            if (guess > secretNumber)
            {
                printf("Your guess is too high. Try again.\n");
            }
            else
            {
                printf("Your guess is too low. Try again.\n");
            }
        }

        if (attempts == maxAttempts)
        {
            printf("You have used all your attempts.\n");
        }
    }

    if (found == 0)
    {
        printf("Game Over. The correct number was: %d\n", secretNumber);
    }

    return 0;
}