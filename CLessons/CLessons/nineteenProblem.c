//nineteenProblem.c
//Takes the input of three different numbers

#include <stdio.h>

int main(void){
    int number1, number2, number3;
    printf("Enter three different integers: ");
    scanf("%d %d %d", &number1, &number2, &number3);

    int sum = 0;
    sum = number1 + number2 + number3;
    printf("Sum is %d\n", sum);
    
    int avg = 0;
    avg = sum / 3;
    printf("Average is %d\n", avg);

    int product = 0;
    product = number1 * number2 * number3;
    printf("Product is %d\n", product);

    if (number1 < number2){
        if (number1 < number3){
            printf("Smallest is %d\n", number1);
        }
        if (number1 > number3){
            printf("Smallest is %d\n", number3);
        }
    }
    if (number2 < number1){
        if (number2 < number3){
            printf("Smallest is %d\n", number2);
        }
        if (number2 > number3){
            printf("Smallest is %d\n", number3);
        }
    }
    if (number3 < number1){
        if (number3 < number2){
            printf("Smallest is %d\n", number3);
        }
        if (number3 > number2){
            printf("Smallest is %d\n", number2);
        }
    }

    if (number1 > number2){
        if (number1 < number3){
            printf("Largest is %d\n", number3);
        }
        if (number1 > number3){
            printf("Largest is %d\n", number1);
        }
    }
    if (number2 > number1){
        if (number2 < number3){
            printf("Largest is %d\n", number3);
        }
        if (number2 > number3){
            printf("Largest is %d\n", number2);
        }
    }
    if (number3 < number1){
        if (number3 < number2){
            printf("Largest is %d\n", number2);
        }
        if (number3 > number2){
            printf("Largest is %d\n", number3);
        }
    }
    return 0;
}