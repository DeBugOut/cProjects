//fiveTwentySix.c
//A program that checks for 'perfect number' and prints it

#include <stdio.h>

int isPerfect(int a);
void printFactors(int num);

int main(){
    for (int i = 0; i < 1000; i++){
        if(isPerfect(i)){
            printf("%d is a perfect number\n", i);
            printFactors(i);
        }
    }

    return 0;
}

int isPerfect(int a){
    int sum = 0;

    for (int i = 1; i <= a / 2; i++){
        if (a % i == 0){
            sum += i;
        }
    }

    return sum == a;
}

void printFactors(int num){
    printf("Factors of %d are: ", num);
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}