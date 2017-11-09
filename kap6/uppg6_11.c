#include <stdbool.h>

_Bool relativa_primtal(unsigned int tal1, unsigned int tal2){
    int talArray1[20], j1 = 0, j2 = 0, talArray2[20];

    for(int i = 2; i < tal1; i++){
        if(tal1 % i == 0){
            talArray1[j1] = i;
            j1++;
        }
    }

    for(int i = 2; i < tal2; i++){
        if(tal2 % i == 0){
            talArray2[j2] = i;
            j2++;
        }
    }

    for (int i = 0; i < j1; i++){
        for(int j = 0; j < j2; j++){
            if(talArray1[i] == talArray2[j]){
                return false;
            }
        }
    }
    return true;
}