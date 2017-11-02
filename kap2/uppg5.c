#include <stdio.h>

#define rabatt 0.10
#define rabatt_grans 1000

int main(void)
{
	int antal;
	float pris, summa;
  printf("Ange antalet kopta enheter: ");
	scanf("%d", &antal);
	printf("Ange pris per enhet: ");
	scanf("%f", &pris);
	summa = antal * pris;
	if(summa >= rabatt_grans)
		printf("Du ska betala: %.2f\n", summa - (summa * rabatt));
	else
		printf("Du ska betala: %.2f\n", summa);
  return 0;
}
