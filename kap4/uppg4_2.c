#include <stdio.h>

int main(void) {
	int ar;
	printf("Ange ett artal: ");
	scanf("%d", &ar);
	if((ar % 4 == 0) && (ar % 100 != 0) || (ar % 400 == 0))
		printf("Skottar!!!\n");

	return 0;
}
