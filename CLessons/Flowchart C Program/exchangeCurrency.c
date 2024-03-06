//exchangeCurrency.c
//A program that converts amount in USD to EUR and JPY

#include <stdio.h>

//Function converts USD to EUR & JPY
int main(){
    float amountUSD = 0;
    printf("What is the amount of cash in USD?\n");
    scanf("%f", &amountUSD);
    float amountEUR = 0;
    float amountJPY = 0;
    //Assume 1 USD = 0.92 EUR = 150.54 JPY
    const float rateEUR = 0.92;
    const float rateJPY = 150.54;
    amountEUR = amountUSD * rateEUR;
    amountJPY = amountUSD * rateJPY;
    printf("The amount of money in USD is: %.02f\n", amountUSD);
    printf("The amount of money in EUR is: %.02f\n", amountEUR);
    printf("The amount of money in JPY is: %.02f\n", amountJPY);
    return 0;
}