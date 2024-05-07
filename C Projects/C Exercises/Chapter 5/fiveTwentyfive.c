//fiveTwentyfive.c
//A program that finds the minimum of 3 floats

#include <stdio.h>

int main(){
    float v1, v2, v3;
    float smallest;

    printf("Type in 3 values: ");
    scanf("%f %f %f", &v1, &v2, &v3);

    smallest = v1;

    if(v2 < smallest){
        smallest = v2;
    }
    
    if(v3 < smallest){
        smallest = v3;
    }

    printf("The smallest value is: %.2f", smallest);

    return 0;
}