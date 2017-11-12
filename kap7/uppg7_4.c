#include <time.h>
#include <stdlib.h>
#define MAXTAL 125

void minsta_heltal(){
  int min;
  srand(time(NULL));
  int tal[MAXTAL][MAXTAL][MAXTAL];

  for (int i = 0; i < MAXTAL; i++){
    for (int j = 0; j < MAXTAL; j++){
      for (int k = 0; k < MAXTAL; k++){
        tal[i][j][k] = rand() % 10000;
      }
    }
  }

  min = tal[0][0][0];

  for (int i = 0; i < MAXTAL; i++){
    for (int j = 0; j < MAXTAL; j++){
      for (int k = 0; k < MAXTAL; k++){
        if(tal[i][j][k] < min){
          min = tal[i][j][k];
        }
      }
    }
  }
  printf("%d", min);
}
