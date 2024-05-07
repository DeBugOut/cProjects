//fiveEighteen.c
//Determine if a value is even or odd

#include <stdio.h>

int isEven(int x);

int main(void){
    int x;

    printf("Type in a value to check if it's even: ");
    while(scanf("%d", &x) == 1){
        isEven(x);
        printf("Type in a value to check if it's even: ");
    }

    return 0; 
}

int isEven(int x){
    int z = x % 2;
    if(z == 0){
        printf("Even\n\n");
    }
    else{
        printf("Odd\n\n");
    }
    return 0;
}