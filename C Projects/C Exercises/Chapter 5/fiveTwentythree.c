//fiveTwentythree.c
// Time in seconds

#include <stdio.h>

int sinceTwelve(int a, int b, int c);
int betweenTime(int a, int b, int c, int x, int y, int z);

int main(){
    int func;

    printf("-------------What would you like to do: -------------\n");
    printf("1 - Time from 12 (sec), 2 - Amount between time (sec)\n");
    scanf("%d", &func);

    if(func == 1){
        int hr, min, sec;
        printf("\nEnter in three int for (hr min sec): ");
        scanf("%d %d %d", &hr, &min, &sec);
        printf("\nThe amount of seconds from 12 is: %d seconds", sinceTwelve(hr, min, sec));
    }
    else if(func== 2){
        int hr1, min1, sec1;
        int hr2, min2, sec2;

        printf("\nEnter the 1st time (12 hour cycle) in (hr min sec): ");
        scanf("%d %d %d", &hr1, &min1, &sec1);

        printf("\nEnter the 2nd time (12 hour cycle) in (hr min sec): ");
        scanf("%d %d %d", &hr2, &min2, &sec2);

        printf("\nThe difference between the 2 times in seconds is: %d seconds", betweenTime(hr1, min1, sec1, hr2, min2, sec2));
    }

    return 0; 
}

int sinceTwelve(int a, int b, int c){
    int sec = 0;
    int x, y, z, ft; 

    sec = c;
    x = a * 3600;
    y = b * 60;
    z = x + y;
    sec += z;

    ft = 43200 - sec;
    return ft;
}

int betweenTime(int a, int b, int c, int x, int y, int z) {
    int sec1, sec2;
    int i1, j1, k1;
    int i2, j2, k2;

    // Calculate first time
    i1 = 60 * 60 * a;  // hours to seconds
    j1 = 60 * b;       // minutes to seconds
    k1 = i1 + j1;
    sec1 = k1 + c;     // Add seconds

    // Calculate second time
    i2 = 60 * 60 * x;  // hours to seconds
    j2 = 60 * y;       // minutes to seconds
    k2 = i2 + j2;
    sec2 = k2 + z;     // Add seconds

    // Calculate the absolute difference in seconds
    int diff = sec1 - sec2;
    if (diff < 0) {
        diff = -diff;  // Make it positive if needed
    }

    return diff;
}
