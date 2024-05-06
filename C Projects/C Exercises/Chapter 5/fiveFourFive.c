//fiveFour.c
//A section with different functions (a, b, c, d)

#include <stdio.h>
#include <math.h>

double hypothenuse(double x, double y); //function prototype (A)
int smallest(int x, int y, int z);      //function prototype (B)
int instructions(int x);                     //function prototype (C)
float intToFloat(int x);                //function prototype (D) 

int main(){
    int func; 

    printf("Enter a function for section 1 2 3 or 4: ");
    scanf("%d", &func);

    if(func == 1){
        // section A:
        double side1, side2;

        printf("Input 2 sides of a triangle to find the hypothenuse: ");
        scanf("%lf %lf", &side1, &side2);

        printf("The hypothenuse is: %.02lf", hypothenuse(side1, side2));
    }
    else if(func == 2){
        // section B:
        int x, y, z;

        printf("Input 3 values to find the smallest: ");
        scanf("%d %d %d", &x, &y, &z);

        printf("The smallest value is: %d", smallest(x,y,z));
    }
    else if (func == 3){
        // section C:
        int z;
        instructions(z);
    }
    else if(func == 4){
        //section D:
        int i;

        printf("Enter a value to convert to a float: ");
        scanf("%d", &i);

        printf("The float is: %f", intToFloat(i));
    }
    else{
        printf("Invalid Value.");
    }
    
    return 0;
}

double hypothenuse(double x, double y){
    double c = sqrt(x*x + y*y);
    return c;
}

int smallest(int x, int y, int z){
    int small = x;

    if (y < small){
        small = y;
    }
    if (z < small){
        small = z;
    }
    return small;
}

float intToFloat(int x){
    float f = x;
    return f;
}

int instructions(int x){
    return 0;
}