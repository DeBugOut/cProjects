//threeTwentyfour.c
//A Tabular Output Program using \t

#include <stdio.h>

int main() {
    int n;

    // Print the header row
    printf("N\t10*N\t100*N\t1000*N\n");

    // Loop through numbers 1 to 10
    for (n = 1; n <= 10; n++) {
        printf("%d\t%d\t%d\t%d\n", n, 10*n, 100*n, 1000*n);
    }

return 0;
}
