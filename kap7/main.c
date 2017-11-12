#include "kap7.h"
#define MAX 8

int main(){
  char text[MAX] = "abcdefg";
  char *p1, *p2;
  printf("%s", text);
  swap(text, MAX);
  printf("%s", text);
  copy(text, MAX);
  veckodag(6);
  minsta_heltal();
  p1 = las_rad();
  printf("%s\n", p1);
  //p2 = minnes_allokering();
  //printf("%s");
  simpsons_formel();
  simpsons_formel_alt();
  qsort_test();
  getchar();
}
