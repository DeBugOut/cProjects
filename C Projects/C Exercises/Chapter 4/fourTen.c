//fourTen.c
//A program that finds the average sequence of an int.

#include <stdio.h>

int main(){
    int counter = 0, value, sum = 0;

    printf("Enter a sequence of integers (9999 to end): ");

    while(scanf("%d", &value) && value != 9999){
        sum += value; 
        counter++;
    }

    if(counter > 0){
        double result = (double) sum / counter;
        printf("The result is: %.2f", result);
    }
    else{
        printf("No integers were entered.");
    }

    return 0;
}