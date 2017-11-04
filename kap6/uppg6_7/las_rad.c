#include <stdio.h>

char rad[100] = "";
int nasta = 0;

las_rad(void){
    int c, i;
    if(c = getchar() == EOF){
        return 0;
    }
    else {
        i = 0;
        while(c != '\n' && c != EOF){
            rad[i++] = c;
            c = getchar();
        }
        rad[i] = '\0';
        nasta = 0;
        return 1;
    }
}

void fel(char text[]){
    for(int i = 0; i < nasta; i++){
        putchar(' ');
    }
    printf("!\n%s\n", text);
}