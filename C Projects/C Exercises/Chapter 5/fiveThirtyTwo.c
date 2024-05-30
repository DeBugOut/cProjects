// fiveThirtyTwo.c
// A guess the number game

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int randomnum(int min, int max);

int main() {
    int num, guess;
    char redo;

    srand(time(NULL));  // Initialize the random number generator once

    do {
        num = randomnum(1, 1000);

        printf("I have a number between 1 and 1000.\n");
        printf("Can you guess my number?\n");
        printf("Please type your first guess.\n");
        scanf("%d", &guess);

        while (guess != num) {
            if (guess > num) {
                printf("Too high. Try again.\n");
            } else {
                printf("Too low. Try again.\n");
            }
            scanf("%d", &guess);  // Update guess
        }

        printf("Excellent! You guessed the number!\n");
        printf("Would you like to try again (y or n)? ");
        scanf(" %c", &redo);  // Notice the space before %c to consume any leftover newline character

        redo = tolower(redo);

    } while (redo == 'y');

    printf("\nThank you for playing.\n");

    return 0;
}

int randomnum(int min, int max) {
    return (rand() % (max - min + 1)) + min;  // Correct range calculation
}
