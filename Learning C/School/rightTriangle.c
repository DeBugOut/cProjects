//rightTriangle.c
// A program that checks if the following dimensions
// creates a right triangle.

#include <stdio.h>

int main() {
    int a, b, c;  // side lengths of the triangle

    // Prompt user to enter the side lengths
    printf("Enter the lengths of three sides of a triangle:\n");
    scanf("%d %d %d", &a, &b, &c);

    // Find the largest side to assume it as hypotenuse
    int hypotenuse = c, side1 = a, side2 = b;
    if (a > b && a > c) {
        hypotenuse = a;
        side1 = b;
        side2 = c;
    } else if (b > a && b > c) {
        hypotenuse = b;
        side1 = a;
        side2 = c;
    }

    if (hypotenuse * hypotenuse == side1 * side1 + side2 * side2) {
        printf("The triangle is a right-angled triangle.\n");
    } else {
        printf("The triangle is not a right-angled triangle.\n");
    }

    return 0;
}
