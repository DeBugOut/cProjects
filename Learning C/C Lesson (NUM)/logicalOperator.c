//logicalOperator.c
// Different Logical Operators in C.

#include <stdio.h>
#include <stdbool.h>

int main() {
    int temp = 0;
    bool sunny = false;

    // (&&) and operator
    // (||) or operator
    // (!) not operator

    if (temp <= 35 && temp > 16){
        printf("\nThe weather is good!");
    }
    else{
        printf("\n The weather is bad");
    }

    return 0;
}