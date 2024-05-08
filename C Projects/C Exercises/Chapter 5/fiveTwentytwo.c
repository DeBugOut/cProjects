//fiveTwentytwo.c
// Separating Digits.

#include <stdio.h>

int findQuotient(int a, int b);
int findRemainder(int a, int b); 
int separating(int a); //function prototypes

int main(){
    int func; 

    printf("------------What would you like to do:------------\n");
    printf("1 - Quotient, 2 - Remainder, 3 - Separating Digits\n");
    scanf("%d", &func);

    if(func == 1){
        int v1, v2;
        printf("Enter two digits with a space in between: ");
        scanf("%d %d", &v1, &v2);
        printf("\nThe quotient is: %d", findQuotient(v1, v2));
    }
    else if(func == 2){
        int v1, v2;
        printf("Enter two digits with a space in between: ");
        scanf("%d %d", &v1, &v2);
        printf("\nThe remainder is: %d", findRemainder(v1, v2));
    }
    else if(func == 3){
        int num;
        printf("Enter a value between 1 and 32767: ");
        scanf("%d", &num);
        separating(num);
    }

    return 0; 
}

int findQuotient(int a, int b){
    return a / b;
}

int findRemainder(int a, int b){
    return a % b;
}

int separating(int a){
    int digits[5], count = 0;

    while(a > 0){
        digits[count++] = a % 10;
        a /= 10;
    }

    for(int i = count - 1; i >= 0; i--){
        if(i != count - 1){
            printf("  ");
        }
        printf("%d", digits[i]);
    }

    return 0;
}