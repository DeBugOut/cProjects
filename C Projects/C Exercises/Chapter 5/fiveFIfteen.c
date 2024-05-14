//fiveFifteen.c
// Hypothenuse Calculation Program.

#include <stdio.h>
#include <math.h>

double hypothenuse(double x, double y);

int main(){
    // section A:
    double side1, side2;

    printf("Input 2 sides of a triangle to find the hypothenuse: ");
    scanf("%lf %lf", &side1, &side2);

    printf("The hypothenuse is: %.02lf", hypothenuse(side1, side2));

    return 0;
}

double hypothenuse(double x, double y){
    double c = sqrt(x*x + y*y);
    return c;
}