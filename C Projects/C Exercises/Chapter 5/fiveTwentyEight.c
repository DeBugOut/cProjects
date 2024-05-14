//fiveTwentyEight.c
// A program that reverse the digits 

#include <stdio.h>

int reverseValue(int a);

int main(){
    int x;

    printf("Type in a value: ");
    scanf("%d", &x);
    
    printf("The reversed value is: %d", reverseValue(x));

    return 0; 
}

int reverseValue(int a){
    int r = 0;
    int s = sizeof(a);
    
    for(int i = 0; i <= s; i++){
        r = r * 10 + a % 10;
        a /= 10; 
    }

    return r;
}