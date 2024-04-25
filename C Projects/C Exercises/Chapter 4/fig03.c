// fig04_03.c
// Summation with ‘for’ of even numbers 2-100.
#include <stdio.h>
int main(void) {
  int sum = 0; // initialize sum
  for (int number = 3; number <= 100; number += 3) {
    sum += number; // add number to sum
    }
   printf("Sum is %d\n", sum);
}