//SA.c
//A program that prints the (A) star:

#include <stdio.h>

int main(){
    int row;
    
    printf("Amount of rows of triangles: ");
    scanf("%d", &row);

    for(int i = row - 1; i >= 0; i--){
        for(int j = row; j > i; j--){
            printf("*");
        }
        puts("");
    }

    return 0;
}