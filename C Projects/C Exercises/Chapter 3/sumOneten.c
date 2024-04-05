#include <stdio.h>

int main() {
    int x = 1;
    int sum = 0;

    while (x <= 10) {
        sum += x;
        x++;
    }

    printf("The sum of integers from 1 to 10 is: %d\n", sum);
    return 0;
}
