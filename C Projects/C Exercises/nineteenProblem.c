//nineteenProblem.c
//Takes the input of three different numbers

#include <stdio.h>

//A function that takes in 3 values and outputs the:
//sum, average, product, smallest number and largest number.
int main() {
    int num1, num2, num3;

    // Takes the input of three integers
    printf("Enter three different integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Calculate sum, average, and product
    int sum = num1 + num2 + num3;
    int average = sum / 3;
    int product = num1 * num2 * num3;

    // Finding the smallest number
    int smallest = num1;    //assume that num1 is the smallest
    if (num2 < smallest)
        smallest = num2;
    if (num3 < smallest)
        smallest = num3;

    // Finding the largest number
    int largest = num1;    //assume that num1 is the largest
    if (num2 > largest)
        largest = num2;
    if (num3 > largest)
        largest = num3;

    // Prints out the results
    printf("Sum is %d\n", sum);
    printf("Average is %d\n", average);
    printf("Product is %d\n", product);
    printf("Smallest is %d\n", smallest);
    printf("Largest is %d\n", largest);

    return 0;
}
