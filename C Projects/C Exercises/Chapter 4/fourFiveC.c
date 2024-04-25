#include <stdio.h>

int main(void) {
    int intVal;  // Variable to store the integer input
    char charVal;  // Variable to store the character input

    printf("Enter an integer and a character: ");
    scanf("%d", &intVal);  // Read integer input
    getchar();  // Consume the newline character left in the input buffer
    charVal = getchar();  // Read the next character which is what user inputs

    printf("Integer: %d\nCharacter: %c\n", intVal, charVal);  // Print the inputs

    return 0;
}
