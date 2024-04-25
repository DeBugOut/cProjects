// fig04_02.c
// Counter-controlled iteration with the for statement.
#include <stdio.h>

int main(void) {
   // initialization, iteration condition, and increment 
   // are all included in the for statement header.
   for (int counter = 3; counter <= 99; counter+=3) {
      printf("%d  ", counter);
   }

   puts(""); // outputs a newlinea
}