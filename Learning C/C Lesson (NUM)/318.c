//3.18 
// Sales commission program:

#include <stdio.h>

float pay(float x);

int main(){
    float dollarSales = 0;

    printf("Enter sales in dollars (-1 to end): ");
    scanf("%f", &dollarSales);

    while(dollarSales != -1){
        printf("Salary is: $%.2f\n", pay(dollarSales));

        printf("\nEnter sales in dollars (-1 to end): ");
        scanf("%f", &dollarSales);
    }

    return 0;
}

float pay(float x){
    float salary = 200 + (0.09 * x);
    return salary;
}