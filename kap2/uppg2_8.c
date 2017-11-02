#include <stdio.h>

int main(void)
{
	int c, ant = 0;
  printf("Skriv en text sa beraknas antalet rader! \n");
	printf("Avsluta med Ctrl-D i Linux eller Ctrl-Z i Windows!!\n");
	while((c = getchar()) != EOF)
	{
		if(c == '\n')
			ant++;
	}
	printf("Antal rader %d!\n", ant);
	return 0;
}
