#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BSIZE 8000

char * minnes_allokering(void){// fattar ej :(
  char buffert[BSIZE];
  char *rader[200], *p;
  char *aktpos = buffert;
  char *slutpos = buffert + BSIZE;

  for(int i = 0; i < 200 && aktpos < slutpos; i++){
    if(fgets(aktpos, slutpos - aktpos, stdin) == NULL){
      break;
    }
    rader[i] = aktpos;
    aktpos += strlen(aktpos) - 1;
  }
  p = rader;
  return p;
}
