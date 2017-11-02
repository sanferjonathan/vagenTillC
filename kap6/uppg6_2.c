#include <stdio.h>

void skriv_flera(char c, int n){
    for (int i = 0; i < 80; i++){
        printf("_");
    }
    printf("\n");
    for (int i = 0; i < n; i++){
        printf("%c", c);
    }
    printf("\n");
}