//fiveEight.c
//Testing out the output of each of the following:

#include <stdio.h>
#include <math.h>

int main() {
    double x;

    // a)
    x = fabs(7.5);
    printf("a) x = %.1f\n", x);

    // b)
    x = floor(7.5);
    printf("b) x = %.1f\n", x);

    // c)
    x = fabs(0.0);
    printf("c) x = %.1f\n", x);

    // d)
    x = ceil(0.0);
    printf("d) x = %.1f\n", x);

    // e)
    x = fabs(-6.4);
    printf("e) x = %.1f\n", x);

    // f)
    x = ceil(-6.4);
    printf("f) x = %.1f\n", x);

    // g)
    x = ceil(-fabs(-8 + floor(-5.5)));
    printf("g) x = %.1f\n", x);

    return 0;
}
