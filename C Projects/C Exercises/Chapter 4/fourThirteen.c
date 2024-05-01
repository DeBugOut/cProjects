//fourThirteen.c
//A program that finds the product of all odd integers from 1 to 15.

#include <stdio.h>

int main(){
    int product = 1;

    for(int i = 1; i <= 15; i++){
        int j = i % 2;
        if(j == 0){
            continue;
        }
        else{
            product *= i;
        }
    }

    printf("The product of odd numbers from 1 to 15 is: %d", product);

    return 0;
}