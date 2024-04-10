//rpsGame.c
// Rock Paper Scissors Game

#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
#include <time.h>
#include <ctype.h>

int game (char you, char computer);
int randomnum (int min, int max);

int main() {
    char you, computer, result;
    int n;

    printf("----------Rock Paper Scissors Game----------\n");
    printf("     Pick one of the following choices:     \n");
    printf("(r) Rock, (p) Paper, (s) Scissors, (x) Stop\n");
    printf("--------------------------------------------\n");
    scanf("%s", &you);

    you = tolower(you);
    
    while(you != 'x'){

        n = randomnum(0,100);

        if (n>=0 && n<33){
            computer = 's';
            printf("Computer: s\n");
            printf("-----------\n");
        }
        else if (n>33 && n<66){
            computer = 'r';
            printf("Computer: r\n");
            printf("-----------\n");
        }
        else if (n>66 && n<100){
            computer = 'p';
            printf("Computer: p\n");
            printf("-----------\n");
        }

        result = game(you, computer);

        if (result == -1){
            printf("It's a draw!\n");
        }
        else if(result == 1){
            printf("You Won!\n");
        }
        else if (result == 0){
            printf("You Lost!\n");
        }
        else{
            printf("Invalid Move! Try Again.\n");
        }

        printf("--------------------------------------------\n");
        printf("     Pick one of the following choices:     \n");
        printf("(r) Rock, (p) Paper, (s) Scissors, (x) Stop\n");
        printf("--------------------------------------------\n");
        scanf("%s", &you);

        you = tolower(you);
    }

    return 0;
}

int randomnum(int min, int max){
    srand(time(NULL));
    int result = (rand() % (max-min)) + min;
    return result;
}

int game (char you, char computer){
    if (you == computer){
        return -1;
    }
    else if (you == 's' && computer == 'p'){
        return 1;
    }
    else if (you == 's' && computer == 'r'){
        return 0;
    }
    else if (you == 'p' && computer == 'r'){
        return 1;
    }
    else if (you == 'p' && computer == 's'){
        return 0;
    }
    else if (you == 'r' && computer == 'p'){
        return 0;
    }
    else if (you == 'r' && computer == 's'){
        return 1; 
    }
    else{
        return 101;
    }
}