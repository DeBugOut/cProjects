//nineteenProblem.c
//Takes the input of three different numbers

#include <stdio.h>

int main(void){
    int number1, number2, number3;
    printf("What are the three numbers?\n");
    scanf("%d %d %d", &number1, &number2, &number3);

    int sum = 0;
    sum = number1 + number2 + number3;
    printf("The sum is %d\n", sum);
    
    int avg = 0;
    avg = sum / 3;
    printf("The average is %d\n", avg);

    int product = 0;
    product = number1 * number2 * number3;
    printf("The product is %d\n", product);

    if (number1 < number2){
        if (number1 < number3){
            printf("The smallest number is %d\n", number1);
        }
        if (number1 > number3){
            printf("The smallest number is %d\n", number3);
        }
    }
    if (number2 < number1){
        if (number2 < number3){
            printf("The smallest number is %d\n", number2);
        }
        if (number2 > number3){
            printf("The smallest number is %d\n", number3);
        }
    }
    if (number3 < number1){
        if (number3 < number2){
            printf("The smallest number is %d\n", number3);
        }
        if (number3 > number2){
            printf("The smallest number is %d\n", number2);
        }
    }
    return 0;
}