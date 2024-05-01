//fourTwelve.c
//A program that calculates the sun from 2 to 30

#include <stdio.h>

int main(){
    int sum = 0;

    for(int i = 2; i<=30; i++){
        sum += i;
    }

    printf("The sum from 2 to 30 is: %d", sum);

    return 0;
}