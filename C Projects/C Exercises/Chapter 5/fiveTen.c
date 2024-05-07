//fiveTen.c
// A Program with the function floor

#include <stdio.h>
#include <math.h>

int main(){
    float x, y;

    printf("Type in a value (Enter a nonnumeric number to quit): ");
    
    while(scanf("%f", &x) == 1){
        y = floor(x + 0.5);
        printf("Original number: %.2f, Rounded number: %.0f\n\n", x, y);
        printf("Type in a value (Enter a nonnumeric number to quit): ");
    }

    return 0;
}