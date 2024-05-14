//fiveTwentySeven.c
//A program that finds all the prime numbers from 1 to 10k

#include <stdio.h>

int isPrime(int a);

int main(){
    printf("Prime numbers from 1 - 100:\n");
    for(int i = 1; i <= 100; i++){
        isPrime(i);
    }

    return 0;
}

int isPrime(int a){
    int sum = 0;

    for(int i = 1; i <= a; i++){
        if (a % i == 0){
            sum += i;
        }
    }

    if(sum == a + 1){
        printf("%d\n", a);
    }

    return 0;
}