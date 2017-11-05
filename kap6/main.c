#include "kap6.h"
#include <stdio.h>

int main(void){
    double d1, d2, d3;
    int i1;
    my_name();
    skriv_flera('j', 10);
    d1 = upphoj(3, 3);
    printf("%.2lf\n", d1);
    d2 = calk(10, 9);
    printf("%.2lf\n", d2);
    d3 = nfak(5);
    printf("%.2lf\n", d3);
    //roten();
    i1 = storsta_div(20, 12);
    printf("%d\n", i1);
    krona_klave();
    queue();
    printf("\nPress any key to exit..");
    while ( getchar() != '\n' );
        getchar();
    return 0;
}