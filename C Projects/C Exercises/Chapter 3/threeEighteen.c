//3.18
// A program that calculates sales commissions.

#include <stdio.h>

float pay(float x){
    float salary = 200 + (0.09 * x);
    return salary;
}

int main(){
    float dollarsales = 0;

    printf("Enter sales in dollars (-1 to end): ");
    scanf("%f", &dollarsales);

    while (dollarsales != -1){
        printf("Salary is: $%.2f\n", pay(dollarsales));

        printf("Enter sales in dollars (-1 to end): ");
        scanf("%f", &dollarsales);
    }

    return 0;
}