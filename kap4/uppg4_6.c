#include <stdio.h>

int main(void) {
	char nr[11];

	printf("Ange ditt personnummer (tio siffror): ");
	scanf("%10s", nr);

	int numb = (int) nr[8];
	if(numb % 2 == 0)
		printf("Du ar kvinna!\n");
	else
		printf("du ar man!\n");

	return 0;
}
