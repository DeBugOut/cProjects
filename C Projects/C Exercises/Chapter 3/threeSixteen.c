//3.16
//A program that calculates gas mileage

#include <stdio.h>

float mpg(float x, float y){
    if (y == 0){
        printf("Cannot divide by 0");
    }
    return (float)x / y;
}

int main() {
    float gal, miles;
    float totalgal = 0, totalmiles = 0;
    int tanks = 0;

    printf("Enter the gallons used (-1 to end): ");
    scanf("%f", &gal);

    while (gal != -1) {
        totalgal += gal;

        printf("Enter the miles driven: ");
        scanf("%f", &miles);
        totalmiles += miles;

        printf("The miles per gallon is: %f\n", mpg(miles, gal));
        
        printf("Enter the gallons used (-1 to end): ");
        scanf("%f", &gal);

        tanks++;
    }

    if (tanks > 0){
        float overallavg = totalmiles / totalgal;
        printf("The overall average mpg was %f\n", overallavg);
    }
    else{
        printf("No data entered.\n");
    }

    return 0;
}
