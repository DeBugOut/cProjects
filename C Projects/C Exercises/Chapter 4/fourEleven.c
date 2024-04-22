//fourEleven.c
//Finding the smallest number.

#include <stdio.h>

int main(){
    int count, smallest, value;

    printf("Enter the count: ");
    scanf("%d", &count);

    if(count <= 0){
        printf("No input.");
    }

    printf("Enter int 1: ");
    scanf("%d", &smallest);

    for (int i = 1; i < count; i++){
        printf("Enter int %d: ", i + 1);
        scanf("%d", &value);

        if(value<smallest){
            smallest = value;
        }
    }

    printf("\nThe smallest is: %d", smallest);

    return 0;
}