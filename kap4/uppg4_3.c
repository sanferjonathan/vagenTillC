#include <stdio.h>

int main(void) {
	int betalning, pris, vaxel, hundra_sedlar, femtio_sedlar, tjugo_sedlar, tio_kronor, fem_kronor;
	printf("Ange beloppet du betalar med: ");
	scanf("%d", &betalning);
	printf("Ange priset: ");
	scanf("%d", &pris);
	vaxel = betalning - pris;  
	if(vaxel >= 100) {
		hundra_sedlar = vaxel / 100;
		vaxel = vaxel % 100; 
	}
	if(vaxel >= 50) {
		femtio_sedlar = vaxel / 50;
		vaxel = vaxel % 50; 
	}
	if(vaxel >= 20) {
		tjugo_sedlar = vaxel / 20;
		vaxel = vaxel % 20; 
	}
	if(vaxel >= 10) {
		tio_kronor = vaxel / 10;
		vaxel = vaxel % 10; 
	}
	if(vaxel >= 5) {
		fem_kronor = vaxel / 5;
		vaxel = vaxel % 5; 
	}
	printf("Din vaxel ar %d hundralappar, %d femtiolappar, %d tjugolappar, %d tiokronor, %d femkronor och %d enkronor\n", hundra_sedlar, femtio_sedlar, tjugo_sedlar, tio_kronor, fem_kronor, vaxel);
	return 0;
}
