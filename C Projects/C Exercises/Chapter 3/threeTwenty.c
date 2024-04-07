//3.20
//Salary Calculator

#include <stdio.h>

float salary(int x, float y){
    if (x > 40){
        int pay = (y * 40) + (1.5 * y * (x - 40));
        return pay;
    }
    else {
        int pay = x * y;
        return pay;
    }
}

int main() {
    int hours;
    float hrate;

    printf("Enter # of hours worked (-1 to end): ");
    scanf("%d", &hours);

    while(hours != -1){
        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%f", &hrate);

        printf("Salary is $%.2f\n\n", salary(hours, hrate));

        printf("Enter # of hours worked (-1 to end): ");
        scanf("%d", &hours);
    }

    return 0;
}