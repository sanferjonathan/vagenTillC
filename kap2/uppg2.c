#include <stdio.h>

int main(void)
{
	float tid1, tid2, forbrokning; 
  printf("Ange dagens matarstallning: \n");
	scanf("%f", &tid1);
	printf("Ange matarstallningen for ett ar sen: \n");
	scanf("%f", &tid2);
	printf("Ange antalet forbrokade liter bensin under aret: \n");
	scanf("%f", &forbrokning);
	printf("Din bil har gatt %f", tid1 - tid2);
	printf(" mil det senaste aret och den förbrukar genomsnittligen %f\n", (tid1 - tid2)/forbrokning);
	printf("liter bensin per mil\n");
	return 0;
}
