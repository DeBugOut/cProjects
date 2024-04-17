//fourSeven.c
//Write for statements that prints the following sequences of values:

#include <stdio.h>

int main(){
    //print 1,2,3,4,5,6,7
    for(int i = 1; i<=7; i++){
        printf("%d ", i);
    }

    puts("");

    //print 3,8,13,18,23
    for(int j = 3; j<=23; j+=5){
        printf("%d ", j);
    }

    puts("");

    //print 20,14,8,2,-4,10
    for (int k = 20; k>=-10; k-=6){
        printf("%d ", k);
    }

    puts("");

    //print 19,27,35,43,51
    for (int l = 19; l<=51; l+=8){
        printf("%d ", l);
    }

    return 0;
}