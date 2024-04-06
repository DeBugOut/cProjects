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

    //String MODIFICATION Functions:
    //strlwr(string1);              //converts to lower case
    //strupr(string1);              //converts to upper case
    //strcat(string1, string2);     //appends str2 to the end of str1
    //strncat(string1, string2, 1); //same thing except append n characters
    //strcpy(string1, string2);     //copy string2 to string1
    //strncpy(string1, string2, 1); //same thing except copy n characters

    //String SET Functions:
    //strset(string1, '?');     //set all the chars. of a string to a given char.
    //strnset(string1, 'x', 1); //set the first n chars. of a string to a given char.
    //strrev(string1);          //used to reverse a string.

    printf("%s\n", string1);

    //Returning String INTEGERS:
    int result = strlen(string1);               //return string length as int.
    //int result = strcmp(string1, string2);      //string compare all chars. (matching)
    //int result = strncmp(string1, string2, 1);  //string compare n chars.
    //int result = strcmpi(string1, string1);     //string compare all (ignore case)
    //int result = strncmpi(string1, string1, 1); //string compare n chars. (ignore case)

    printf("%d\n", result);

    //FOR LOOPS: 
    //for loops - repeats a section of code for a limited amount of time

    for(int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }

    //WHILE LOOPS:
    //while loops - repeats a section of code possibly unlimited times.
    //while loops execute as long as the condition is true. 
    //while loops might sometimes not execute at all.

    /*
    char prenom[25];
    printf("\nYour prenom: ");
    fgets(prenom, 25, stdin);
    prenom[strlen(prenom) - 1] = '\0';
    
    while (strlen(prenom) == 0)
    {
        printf("\n Please enter your name!");
        printf("\nYour Prenom: ");
        fgets(prenom, 25, stdin);
        prenom[strlen(prenom) - 1] = '\0';
    }

    printf("Hello %s", prenom);
    */

    //DO WHILE loop:
    // while loop = checks a condition, THEN executes a block of code if condition is true
    // do while loop = always executes a block of code once, THEN checks a condition

    /*
    int number = 0;
    int sum = 0;
    
    do{
        printf("Enter a # above 0: ");
        scanf("%d", &number);
        if(number >= 0)
        {
            sum += number;
        }
    }while(number > 0);

    printf("sum: %d", sum);
    */

    //nested loop = a loop inside of another loop
        //CHECK project 'nestedLoop.c'

    // switch = A more efficient alternative to using many "else if" statements
    // allows a value to be tested for equality against many cases

    /*
    char letterGrade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &letterGrade);

    switch(letterGrade){
        case 'A':
            printf("perfect!\n");
            break;
        case 'B':
            printf("You did good!\n");
            break;
        case 'C':
            printf("You did okay!\n");
            break;
        case 'D':
            printf("At least it's not an F!\n");
            break;
        case 'F':
            printf("YOU FAILED!\n");
            break;
        default:
            printf("Please enter only valid grades");
    }
    */

    // continue = skips rest of code & forces the next iteration of the loop
    // break = exits a loop/switch

    for(int i = 1; i <= 20; i++)
    {
        if(i == 13)
        {
            continue;           //skips 13
            //break;
        }
        printf("%d\n", i);
    }

    // array = a data structure that can store many values of the same data type.

    //double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};
    double prices[5];

    prices[0] = 5.0;
    prices[1] = 10.0;
    prices[2] = 15.0;
    prices[3] = 25.0;
    prices[4] = 20.0;

    printf("$%.2lf", prices[0]);
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