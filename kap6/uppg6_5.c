/*
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

void roten(void){
    double g = 2;
    static const double MAX = 0.000001; 
    srand(time(NULL));
    double x = rand() % 10000;
    while((x - g) <= MAX){ //Körs aldrig?
        g = (g + (x / g)) / 2;
    }
    printf("x = %lf och gissning = %lf", x, g);
}
*/