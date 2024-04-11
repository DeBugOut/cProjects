//cIntro.c
// An introduction to C

#include <stdio.h>

int main(){
    printf("Hello!\n");
    printf("This is line 8.\n");

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nThe number that's been given is: %d", num);  

    return 0;
}