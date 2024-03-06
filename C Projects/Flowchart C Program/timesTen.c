//timesTen.c
//A program that takes a user input value and times 10.

#include <stdio.h>

//Functions that takes in a value 
int main(){
    int value = 0;
    printf("What is the input value?\n");
    scanf("%d",&value);
    int result;
    result = value * 10;                //Multiplies the value by 10
    printf("The result is %d",result);  //Prints the result
    return 0;
}