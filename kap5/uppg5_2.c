#include <stdio.h>

int main() {
	int anget_ar, antal_ar, detta_ar = 2017;
	double utflyttade = 25, invanare = 26000, okning = 0.001, fodda; 
	printf("Ange vilket ar du vill se komunens berakanade invanarantal!! \n");
	scanf("%d", &anget_ar);
	antal_ar = anget_ar - detta_ar;
	for(int i = 1; i <= antal_ar; i++) {
		fodda = invanare * okning;
		invanare += fodda - utflyttade;
		printf("Ar %d beraknas invanarantalet vara %.2lf stycken\n", detta_ar + i, invanare);
	}
	return 0;
}
