// CLessons.c
// Lessons on C

#include <stdio.h>      //gives access to printf and scanf
#include <stdbool.h>    //gives access to booleans
#include <math.h>       //gives access to math library
#include <string.h>     //gives access to string editting. 

//FUNCTION Prototype
//used to declare a function before the body.
void birthday(char[], int);

int findMax(int,int);

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

    //Augmented Assignment Operators:
    //used as operators to replace a variable
    //for example:

    int t = 10;

    // t = t + 1;
    t += 1; //both of these are the same
    //this could be done for
    // + - * / and %
    // += -= *= /= %=

    printf("%d", t);

    //logical operators - && (means 'and' operator)
    //logical operators - || (means 'or' operator)
    //logical operators - ! (means 'not' operator)

    int temp = 25;
    bool sunny = true; 

    //'and' logical operator (&&) checks if
    //both conditions are true. 
    if (temp <= 35 && temp > 0 && sunny){
        printf("\nThe weather is good!");
    }
    else{
        printf("\nThe weather is bad!");
    } 

    //Example of logical operator 'and' (&&)

    //'or' logical operator (||) checks if
    //one of the conditions are true. 
    if (temp <= 0 || temp >= 35){
        printf("\nThe weather is bad");
    }
    else{
        printf("\nThe weather is good");
    }

    //Example of logical operator 'or' (||)

    //'not' logical operator (!) checks if
    //a condition is false. 
    if (!sunny){
        printf("\nIt's cloudy.");
    }
    else{
        printf("\nIt's sunny.");
    }

    //Arguments and Parameters:
    char chmous[] = "Leo";
    int ayu = 18;

    //Calling the FUNCTION Birthday:
    birthday(chmous, ayu);

    //ternary operator - short cut for an if/else statement
    //(condition) ? value if true : value if false

    int max = findMax(3, 5);

    printf("The max value is: %d\n", max);

    char string1[] = "Bro";
    char string2[] = "Program";

    //FUNCTIONS of string.h:
    //strlwr(string1);              //converts to lower case
    //strupr(string1);              //converts to upper case
    //strcat(string1, string2);     //appends str2 to the end of str1
    //strncat(string1, string2, 1); //same thing except append n characters
    //strcpy(string1, string2);     //copy string2 to string1
    //strncpy(string1, string2, 1); //same thing except copy n characters

    printf("%s", string1);

    return 0;
}

//FUNCTIONS in C:
void birthday(char x[], int y)
{
    printf("\nHappy Birthday to %s!\n", x);
    printf("Happy Birthday to %s!\n", x);
    printf("You are %d years old now!\n", y);
    printf("You are %d years old now!\n", y);
}

int findMax(int x, int y)
{
    return (x>y) ? x : y;
}