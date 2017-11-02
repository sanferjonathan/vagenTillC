#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char datum[10], fodelsedag[10];
	int n = 11;
	printf("Ange dagens datum pa formen aa-mm-dd: ");
	fgets(datum, n, stdin);
	printf("Ange din fodelsedag pa formen aa-mm-dd: ");
	fgets(fodelsedag, n, stdin);
	if((strcmp(datum, fodelsedag)) == 0)
		printf("Grattis!!!\n");

	return 0;
}
