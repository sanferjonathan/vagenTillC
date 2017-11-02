#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	enum veckodag {mandag, tisdag, onsdag, torsdag, fredag, lordag, sondag};
	enum veckodag akt_dag;
	int temp, max_temp = 0, tot_temp = 0;
	srand(time(NULL));
	for(akt_dag = mandag; akt_dag <= sondag; akt_dag++) {
		temp = rand() % 31;
		tot_temp += temp; 
		printf("Temperaturen pa dag nr %d ar: %2d garder varmt!!\n", akt_dag + 1, temp);
		if(temp > max_temp)
			max_temp = temp;
	}
	printf("Den varmaste dagen var: %d\n", max_temp);
	tot_temp /= 7;
	printf("Medelvardet av temperaturerna ar: %d\n", tot_temp);

	return 0;
}
