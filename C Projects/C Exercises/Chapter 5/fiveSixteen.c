//fiveSixteen.c
// An Expoenentation Program w/o Math Library

#include <stdio.h>

int integerPower(int n, int e); //function prototype

int main(){
    int num, expo;

    printf("Input a value followed by it's exponent: ");
    scanf("%d %d", &num, &expo);

    printf("The result is: %d", integerPower(num, expo));

    return 0; 
}

int integerPower(int n, int e){
    int ans;

    for(int i = 1; i <= e; i++){
        ans *= n;
    }

    return ans;
}