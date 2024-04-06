//2.16
//A program that reads two integers and then display
//sum difference product quotient and remainder.

#include <stdio.h>

int sum(int x, int y){
    return x + y;
}

int difference(int x, int y){
    return x - y;
}

int product(int x, int y){
    return x * y;
}

float quotient(int x, int y){
    if (y == 0){
        printf("Cannot divide by 0");
    }
    return (float)x / y;
}

int rem(int x, int y){
    return x % y;
}

int main(){
    int num1, num2;

    printf("Type the value of the first number: ");
    scanf("%d", &num1);

    printf("Type the value of the second number: ");
    scanf("%d", &num2);

    printf("The sum is: %d\n", sum(num1, num2));
    printf("The difference is: %d\n", difference(num1, num2));
    printf("The product is: %d\n", product(num1, num2));
    printf("The quotient is: %d\n", quotient(num1, num2));
    printf("The remainder is: %d\n", rem(num1, num2));

    return 0;
}