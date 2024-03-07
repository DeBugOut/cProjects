//eighteenProblem.c
//a program that takes input of 2 integers 
//and finds the large or equal

#include <stdio.h>

int main(void){
    int number1, number2;
    printf("Input the two numbers:\n");
    scanf("%d %d", &number1, &number2);
    
    if (number1 > number2) {
        printf("%d is larger than %d\n", number1, number2);
    }

    if (number1 < number2) {
        printf("%d is larger than %d\n", number2, number1);
    }

    if (number1 == number2) {
        printf("%d is equal to %d\n", number1, number2);
    }
    return 0;
}