#include "kap6.h"

int main(void){
    double d1, d2, d3;
    int i1, i2;
    _Bool b1;

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
    i2 = siff_sum(123);
    printf("%d\n", i2);
    b1 = relativa_primtal(18, 21);
    printf("De tva talen ar %s\n", b1 ? "relativa primtal" : "inte relativa primtal");
    printb(99, 10);
    printf("\n");
    my_gets(10);
    printf("\nPress any key to exit..");
    getchar();
    return 0;
}