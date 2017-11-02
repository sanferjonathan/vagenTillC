#include <time.h>
#include <stdlib.h>
#include <stdio.h>

void roten(void){
    double g, h = 2, x, x_ny;
    static const int MIN = 0.000001; 
    srand(time(NULL));
    double r = rand() % 10000;
    printf("Gissa roten: ");
    scanf("%lf", &g);
    //x = g * h;
    while((r - x_ny) < MIN){
        h = (g + (r / g)) / 2;
        x_ny = g * h;
    }
    printf("r = %lf och gissning = %lf", r, x_ny);
}