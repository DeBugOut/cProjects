//fiveNineteen.c
//A program that outputs (*) a certain amount of sides

#include <stdio.h>

int main(){
    int s;

    printf("Amount of sides: ");
    scanf("%d", &s);

    for(int i = 1; i <= s; i++){
        for(int j = 1; j <= s; j++){
            printf("*");
        }
        puts("");
    }

    return 0;
}