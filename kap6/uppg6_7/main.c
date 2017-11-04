#include <stdio.h>
#include "las_rad.c"
#include "tilldelning_koll.c"

extern char rad[];
extern int las_rad(void);
extern int uttryck(void);

int main(){
    while (las_rad()){
        if(rad[0] != '\0'){
            if(uttryck()){
                printf("Ok!\n");
            }
        }
    }
    getchar();
}