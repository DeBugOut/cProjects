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

    //constant values - cannot be altered in 
    //any point of the program.

    const float PI = 3.141592;      
    //to signify a const the variable is 
    //written in all CAPS

    // PI = 412; (will cause an error)
    printf("%f\n", PI);

    //Arithmetic Operators
    // + (addition) - (subtraction)
    // * (multiplication) / (division)
    // % (modulus) 
    // ++ (increment) -- (decrement)

    int q = 6;
    int w = 9;

    q++;
    w--;

    float e = q / (float) w; 
    // divisor & result has to be a float.

    printf("q / w is %f\n", e);
    printf("q incremented is %d\n", q);
    printf("w decremented is %d\n", w);

    

    return 0;
}