#include <stdio.h>

#define max 100

int main(void)
{
	char indata[max];
  printf("skriv ord separerade med blanktecken tabulatortecken eller nyradstecken. \n");
	printf("Avsluta med Ctrl-D i Linux eller Ctrl-Z i Windows!!\n");
	while(scanf("%99s", indata) == 1)
	{
		printf("%s\n", indata);
	}
	
	return 0;
}
