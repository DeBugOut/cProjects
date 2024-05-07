//fiveNine.c
//A program that calculates the cost of parking

#include <stdio.h>

float calculateCharges(float x); //function prototype
float totalCharge = 0;
float totalTime = 0;

int main(){
    float tv1, tv2, tv3;

    printf("Input the parking time of each vehicle: ");
    scanf("%f %f %f", &tv1, &tv2, &tv3);

    printf("Car\tHours\tCharge\n");
    printf("1\t%5.1f\t%6.2f\n", tv1, calculateCharges(tv1));
    printf("2\t%5.1f\t%6.2f\n", tv2, calculateCharges(tv2));
    printf("3\t%5.1f\t%6.2f\n", tv3, calculateCharges(tv3));
    printf("TOTAL\t%5.1f\t%6.2f\n", totalTime, totalCharge);

    return 0; 
}

float calculateCharges(float x){
    float rate, charge, y;
    if(x < 3){
        charge = 2;
    }
    else if(x > 3){
        y = x - 3;
        charge = 2 + (0.5 * y);
        if (charge > 10){
            charge = 10;
        }
    }
    totalCharge += charge;
    totalTime += x;
    return charge;
}