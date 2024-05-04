//fourFourteen.c
//A program that calculates the number factorial.

#include <stdio.h>

int main(){
    int value, factorial;

    printf("Input a value to calculate the factorial: ");
    scanf("%d", &value);

    for(int i = value; i >= 2; i--){
        factorial *= value;
        value = value - 1;
    }

    printf("The value of the factorial is: %d", factorial);

    return 0;
}