// fig02_01.c
// A first program in C


/*
#include <stdio.h>

//function main begins program execution: 
int main(void){
    printf("Hello, this is the start\n");
    printf("\t  *\n\t ***\n\t*****\n\t ***\n\t  *\n");
    return 0;
}
*/

// fig02_04.c
// Addition Program

/*
#include <stdio.h>
// function main begins program execution.
int main(void){
    int integer1, integer2;
    printf("Enter first integer: \n");
    scanf("%d", &integer1);
    printf("Enter second integer: \n");
    scanf("%d", &integer2);
    int sum = 0;
    sum = integer1 + integer2;

    printf("Sum is %d\n", sum);
    return 0;
}
*/

// fig02_05.c
// Using if statements, relational
// Operators, and equality operators.

#include <stdio.h>

// function main begins program execution
int main(void){
    $START:
    printf("Enter two integers, and I will tell you\n");
    printf("the relationship they satisfy\n");

    int number1, number2;

    scanf("%d %d", &number1, &number2);

    if (number1 == number2) {
        printf("%d is equal to %d\n", number1, number2);
    }

    if (number1 != number2) {
        printf("%d is not equal to %d\n", number1, number2);
    }

    if (number1 < number2) {
        printf("%d is less than %d\n", number1, number2);
    }

    if (number1 > number2) {
        printf("%d is greater than %d\n", number1, number2);
    }

    if (number1 <= number2) {
        printf("%d is less than or equal to %d\n", number1, number2);
    }

    if (number1 >= number2) {
        printf("%d is greater than or equal to %d\n", number1, number2);
    }
    goto $START;

    return 0;
}