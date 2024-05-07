//fiveSeventeen.c
// A program that checks for multiples

#include <stdio.h>

int isMultiple(int x, int y);

int main(void){
    int x, y;

    printf("Type in 2 values to check if they are multiples: ");
    scanf("%d %d", &x, &y);

    isMultiple(x,y);

    return 0; 
}

int isMultiple(int x, int y){
    int z = y % x;
    if(z == 0){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}