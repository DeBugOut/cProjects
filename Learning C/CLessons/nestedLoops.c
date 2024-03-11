#include <stdio.h>

int main() {
    int r;
    int c;
    char sym;

    printf("\nEnter # of rows: ");
    scanf("%d", &r);
    getchar(); // consume the newline character

    printf("Enter # of columns: ");
    scanf("%d", &c);
    getchar(); // consume the newline character

    printf("Enter a symbol to use: ");
    scanf(" %c", &sym); // Note the space before %c to skip whitespace characters

    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            printf("%c", sym);
        }
        printf("\n");
    }

    return 0;
}
