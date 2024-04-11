//dataType.c
// Different Data Types:

#include <stdio.h>

int main(){
    int age = 123;
    float gpa = 4.0;
    char grade = 'B';
    char name[] = "Leonan";

    printf("Hello, %s!\n", name);
    printf("Your age is, %d\n", age);
    printf("Your average grade is %c!\n", grade);
    printf("Your GPA is %.04f\n", gpa);

    return 0;
}