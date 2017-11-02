#include <stdio.h>
#include <stdbool.h>

int main(){

  int n;
  _Bool b = true;

  printf("Ange ett tal: ");
  scanf("%d", &n);

  for(int i = 2; i <= n; i++){
    for(int j = 2; j < i; j++){
        if((i % j) == 0){
          b = false;
        }
    }
    if(b == true){
      printf("%d\n", i);
    }
    else {
      b = true;
    }
  }
  while ( getchar() != '\n' );
    getchar();
  return 0;
}
