#include <stdio.h>

int main(){
    int imax;
    double svarighetsgrad, poang, sum, avg, hopppoang, temp;
    double poangarray[8];
    printf("Ange hoppets svarighetsgrad: \n");
    while(scanf("%lf", &svarighetsgrad) != EOF){
        for(int i = 0; i < 7; i++){
            PRINT: 
            printf("\nAnge poang mellan 1 och 10 fran dommare nr %d: ", i + 1);
            scanf("%lf", &poang);
            if(poang < 1 || poang > 10){
                printf("Invalid value!");
                goto PRINT;
            }
            else{
                for(int j = 0; j < 7; j++){
                    poangarray[j] = poang;
                }
            }
        }
        for (int i = 0; i < 7; i++) {
            imax = i;
            for (int j = i + 1; j < 7; j++) {
                if (poangarray[j] > poangarray[imax]) {
                    temp = poangarray[imax];
                    poangarray[imax] = poangarray[j];
                    poangarray[j] = temp;
                }
            }
        }
        for(int i = 1; i < 6; i++){
            printf("%lf\n", poangarray[i]);
            sum += poangarray[i];
        }
        avg = sum / 5;
        hopppoang = avg * 3 * svarighetsgrad;
        printf("Hoppets poang blev: %lf\n", hopppoang);
        printf("Ange hoppets svarighetsgrad: ");
    }
    return 0;
}