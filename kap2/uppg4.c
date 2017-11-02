#include <stdio.h>

int main(void)
{
	int counter, ore = 1;
  printf("Antalet dagar det ta att tjana en miljon om man borjar pa 1 ore om lonen dubblas varje dag\n");
	while(ore < 100000000)
	{
		counter++;
		ore *= 2;
	}
	printf("Antalet dagar att fa en miljon ar: %d\n", counter);
  return 0;
}
