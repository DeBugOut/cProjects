//3.19
// A Interest Calculator

#include <stdio.h>

float interest(float x, float y, float z){
    float charge = x * y * z /365;
    return charge;
}

int main(){
    float principal, rate; 
    int days;

    printf("Enter loan principal (-1 to end): ");
    scanf("%f", &principal);

    while (principal != -1){
        printf("Enter interest rate: ");
        scanf("%f", &rate);

        printf("Enter term of the loan in days: ");
        scanf("%d", &days);

        printf("The interest charge is $%.2f\n\n", interest(principal, rate, days));
        
        printf("Enter loan principal (-1 to end): ");
        scanf("%f", &principal);
    }

    return 0;
}