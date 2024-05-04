#include <stdio.h>

void print_diamond(int rows) {
    int i, j;
    // Print the upper part of the diamond
    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    // Print the lower part of the diamond
    for (i = rows - 1; i > 0; i--) {
        // Print leading spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    print_diamond(3);
    return 0;
}