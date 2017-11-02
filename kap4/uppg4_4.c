#include <stdio.h>
#include <math.h>

int main(void) {
	double ar, k, mangd, x;

	printf("Detta program raknar ut hur manga procent kol fjorton som aterstar efter x ar!\n");
	printf("Ange antalet ar: ");
	scanf("%lf", &ar);

	k = 0.693/5730.0;
	x = (-k) * ar;
	mangd = exp(x);

	printf("Det finns %.2lf % kvar av materialet!\n", mangd * 100);

	return 0;
}
