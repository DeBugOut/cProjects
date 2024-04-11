//cOperators 
//Different Arithmatic Operators

#include <stdio.h>

int main(){
    // (+) (-) (*) (/) (%)-Modulus 
    // increment (++) decrement (--) 

    int q = 9;
    int p = 11;

    q++;
    p--;

    int e;
    e = p + q;

    printf("q incremented is %d\n", q);    
    printf("p decremented is %d\n", p);   
    printf("q + p is %d\n", e);   

    //Augumented Assignment Operator
    // += -= *= /= %=

    int t = 10;

    t += 1;
    // t = t + 1; 

    printf("%d", t);

    return 0;
}