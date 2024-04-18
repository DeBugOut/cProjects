//fourTen.c
//A program that finds the average sequence of an int.

#include <stdio.h>

int main(){
    int counter, value, sum = 0;
    float result;

    printf("Enter a sequence of integers: ");

    while(value != 9999){
        scanf("%d", &value);
        sum += value; 
        counter++;
    }

    result = sum / counter;

    printf("The result is: %f", result);

    return 0;
}