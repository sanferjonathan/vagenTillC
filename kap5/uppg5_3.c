#include <stdio.h>

int main() {
	double x, x2, term, term2, i, i2, sum = 0, sum2 = 0, epsilon = 0.00000001;
	printf("Ange ett varde for x och fa ut cos(x)!\n");
	scanf("%lf", &x);
	term = 1;
	sum = term;
	i = 2;
	term = -(x * x) / (i * (i - 1));
	do {
		sum += term;
		i += 2;
		term = -(term * x) / (i * (i - 1));
	} while ( term > epsilon || term < -epsilon ); 
	printf("%lf\n", sum);
	
	printf("Ange ett varde for x och fa ut sin(x)!\n");
	scanf("%lf", &x2);
	term2 = x2;
	i2 = 1;
	do {
		sum2 += term2;
		i2 += 2;
		term2 = -term2 * x2 * x2 / (i2 * (i2 - 1));
	} while ( term2 > epsilon || term2 < -epsilon ); 
	printf("%lf\n", sum2);
	
	return 0;
}
