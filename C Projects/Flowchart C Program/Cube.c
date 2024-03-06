//Cube.c
//Program calculates the side area, total side area and volume.

#include <stdio.h>

int main(){
    int sideLength = 0;
    printf("What is the length of one side?\n");
    scanf("%d", &sideLength);
    int sideArea;
    int totalSA;
    int volume;
    sideArea = sideLength * sideLength;
    totalSA = 6 * sideArea;
    volume = sideArea * sideLength;
    printf("The side length is: %d\n", sideLength);
    printf("The side area is: %d\n", sideArea);
    printf("The total side area is: %d\n", totalSA);
    printf("The volume is: %d\n", volume);
    return 0;
}