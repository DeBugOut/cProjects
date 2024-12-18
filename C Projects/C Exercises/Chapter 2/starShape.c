//starShape.c
//outputs stars

#include <stdio.h>

int main() {
    int rows; // Number of rows 
    int i, j, k;

    printf("What is the number of rows the print (odd numbers): ");
    scanf("%d", &rows);

    // Loop for the top
    for (i = 0; i < rows / 2 + 1; i++) {
        // Loop for spaces
        for (j = 0; j < rows / 2 + 1 - i; j++) {
            printf(" ");
        }

        // Loop for printing stars
        for (k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }

        printf("\n");
    }

    // Loop for the bottom
    for (i = rows / 2 - 1; i >= 0; i--) {
        // Loop for spaces
        for (j = 0; j < rows / 2 + 1 - i; j++) {
            printf(" ");
        }

        // Loop for printing stars
        for (k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
