//fiveEleven.c
// A program that rounds a value to the nearest
// int, tenth, hundredth and thousandth

#include <stdio.h>
#include <math.h>

float roundToInteger(float x);
float roundToTenths(float x);
float roundToHundredths(float x);
float roundToThousandths(float x);

int main(){
    float x;

    printf("Type in a value (Enter a nonnumeric number to quit): ");
    
    while(scanf("%f", &x) == 1){
        printf("Original number: %.2f, Rounded number to nearest int: %.0f\n", x, roundToInteger(x));
        printf("Original number: %.2f, Rounded number to nearest tenth: %.1f\n", x, roundToTenths(x));
        printf("Original number: %.2f, Rounded number to nearest hundredth: %.2f\n", x, roundToHundredths(x));
        printf("Original number: %.2f, Rounded number to nearest thousandth: %.3f\n\n", x, roundToThousandths(x));
        printf("Type in a value (Enter a nonnumeric number to quit): ");
    }

    return 0;
}

float roundToInteger(float x){
    float y;
    y = floor(x + 0.5);

    return y;
}

float roundToTenths(float x){
    float y;
    y = floor(x * 10 + 0.5) / 10;
    
    return y;
}

float roundToHundredths(float x){
    float y;
    y = floor(x * 100 + 0.5) / 100;
    
    return y;
}

float roundToThousandths(float x){
    float y;
    y = floor(x * 1000 + 0.5) / 1000;
    
    return y;
}