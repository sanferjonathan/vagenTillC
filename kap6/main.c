#include "kap6.h"
#include <stdio.h>

int main(void){
    double d1, d2, d3;
    my_name();
    skriv_flera('j', 10);
    d1 = upphoj(3, 3);
    printf("%.2lf\n", d1);
    d2 = calk(10, 9);
    printf("%.2lf\n", d2);
    d3 = nfak(5);
    printf("%.2lf\n", d3);
    roten();
    printf("\nPress any key to exit..");
    while ( getchar() != '\n' );
        getchar();
    return 0;
}