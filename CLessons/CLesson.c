// CLessons.c
// Lessons on C

#include <stdio.h>

int main(){
    // This is a program that outputs "Hello World"
    printf("Hello World\n");

    //This shows escape sequences \n - newline and \t - tab
    printf("This is line 1.\n");
    printf("This is line 2.\n");
    printf("1\t2\t3\n");


    //Variables:
    int x;    //declaration of a variable
    x = 123;  //initializing a variable
    int y = 234; //declaration + initialization

    //diff. data types:
    int age = 21;           //integers
    float gpa = 3.85;       //floats
    char grade = 'A';       //a single character
    char name[] = "Leonan"; // an array of characters

    printf("Hello %s!\n",name);
    printf("Your age is %d years old",age);
    printf("Your average grade is a %c\n",grade);
    printf("Your GPA is %.02f\n",gpa);              
    
    //format specifier %.01 (decimal precision)
    //%1 - minimum field length
    //%- - left align text

    float pi = 3.141592;
    printf("Two digits of PI is: %6.02f\n", pi);
    printf("Three digits of PI is: %-8.03f\n", pi);
    printf("Five digits of PI is: %8.05f\n", pi);

    return 0;
}