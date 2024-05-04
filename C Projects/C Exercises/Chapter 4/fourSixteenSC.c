//SC.c
//A program that prints the (C) star:

#include <stdio.h>

int main(){
    int row;
    
    printf("Amount of rows of triangles: ");
    scanf("%d", &row);

    //prints each row:
    for(int i = row; i > 0; i--){
        //prints the spaces:
        for(int k = row; k > i; k--){
            printf(" ");
        }


        //prints the stars:
        for(int j = 0; j < i; j++){
            printf("*");
        }
        puts("");
    }

    return 0;
}