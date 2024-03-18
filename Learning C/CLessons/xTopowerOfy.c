//Raise x to the power of y:

#include <stdio.h>

int main() {
    int x, y;
    int i = 1;
    int exp = 1;

    //Take in the inputs:
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    // Calculate x raised to the power of y
    while (y >= i) {
        exp *= x;  // Multiply result by x
        i++;  // Increment y
    }

    // Print the result
    printf("%d raised to the power of %d is: %d\n", x, y, exp);

    return 0;
}
