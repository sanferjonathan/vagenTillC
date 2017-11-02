#include <stdio.h>
#include <math.h>

int main() {
	int y;
	double j = -1.9, g;
	printf("   x           f(x)\n");
	printf("---------------------\n");
	for(int i = -10; i < 11; i++) {
		y = 3 * pow(i, 3) - 5 * pow(i, 2) + 2 * i - 20;
		printf("%5d        %6d\n", i, y); 
	}
	printf("\n");
	printf("\n");
	printf("\n");
	printf("   x           f(x)\n");
	printf("---------------------\n");
	while(j < 2.0) {
		g = 3.0 * pow(j, 3.0) - 5.0 * pow(j, 2.0) + 2.0 * j - 20.0;
		j += 0.1;
		printf("%5.2lf        %6.2lf\n", j, g);
	}
	return 0;
}
