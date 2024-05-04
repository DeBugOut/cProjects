//SB.c
//A program that prints the (B) star:

#include <stdio.h>

int main(){
    int row;
    
    printf("Amount of rows of triangles: ");
    scanf("%d", &row);

    for(int i = row; i > 0; i--){
        for(int j = 0; j < i; j++){
            printf("*");
        }
        puts("");
    }

    return 0;
}