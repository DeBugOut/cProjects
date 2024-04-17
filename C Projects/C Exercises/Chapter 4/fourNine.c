//fourNine.c
//A program that sums a serquence of integers

#include <stdio.h>

int main(){
    int count, num, sum = 0;

    printf("Enter the number of integers followed by the intergers: ");
    scanf("%d", &count);

    for (int i = 0; i < count; i++){
        scanf("%d", &num);
        sum+=num;
    }

    printf("\nThe result is: %d", sum);

    return 0;
}