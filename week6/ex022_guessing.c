#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    srand(time(NULL));
    int target = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    printf("=== Number Guessing Game (1-100) ===\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < target) {
            printf("Too low! Try again.\n");
        } else if (guess > target) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the number %d in %d attempts.\n", target, attempts);
        }
    } while (guess != target);

    return 0;
}