//SD.c
//A program that prints the (D) star:

#include <stdio.h>

int main(){
    int row;
    
    printf("Amount of rows of triangles: ");
    scanf("%d", &row);

    //prints each row:
    for(int i = row - 1; i >= 0; i--){
        //prints the spaces:
        for(int k = 0; k < i; k++){
            printf(" ");
        }

        //prints the stars:
        for(int j = row; j > i; j--){
            printf("*");
        }
        puts("");
    }

    return 0;
}