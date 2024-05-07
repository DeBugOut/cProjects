//fiveTwenty.c
//Modify 5.19 to work with other signs.

#include <stdio.h>

int fillCharacter(int x, char s);

int main(){
    int s;
    char l;

    printf("Amount of sides: ");
    scanf("%d %c", &s, &l);

    fillCharacter(s, l);

    return 0;
}

int fillCharacter(int x, char s){
    for(int i = 1; i <= x; i++){
        for(int j = 1; j <= x; j++){
            printf("%c", s);
        }
        puts("");
    }
    return 0;
}