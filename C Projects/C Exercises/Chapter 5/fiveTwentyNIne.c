//fiveTwentyNine.c
//A program that finds the GCD of 2 values

#include <stdio.h>

int findGCD(int a, int b);

int main(){
    int v1, v2;

    printf("Enter 2 values separated by a space: ");
    scanf("%d %d", &v1, &v2);

    printf("The GCD is: %d", findGCD(v1,v2));

    return 0;
}

int findGCD(int a, int b){
    int l = a;
    int s = b;

    if(b > a){
        l = b;
        s = a; 
    }

    int r; 

    while(s != 0){
        r = l % s;
        l = s;
        s = r;
    }

    return l; 
}