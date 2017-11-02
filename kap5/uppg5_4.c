#include <stdio.h>

int main() {
	char array[11];
	long int tal, i, sum, kontroll;
	printf("Ange personnummer (10 siffror) har: ");
	scanf("%s", array);
	tal = i = sum = kontroll = 0;
	while ('0' <= array[i] && array[i] <= '9') {
		if ((i % 2 == 1) && (i < 8))
		{
			sum += array[i] - '0';
			tal = (tal * 10) + (array[i] - '0');
			i++;
		}
		else if ((i % 2 == 0) && (i < 9)) {
			if ((2 * (array[i] - '0')) == 10) {
				sum += 1;
				tal = (tal * 10) + (array[i] - '0');
				i++;
			}
			else if ((2 * (array[i] - '0')) == 12) {
				sum += 3;
				tal = (tal * 10) + (array[i] - '0');
				i++;
			}
			else if ((2 * (array[i] - '0')) == 14) {
				sum += 5;
				tal = (tal * 10) + (array[i] - '0');
				i++;
			}
			else if ((2 * (array[i] - '0')) == 16) {
				sum += 7;
				tal = (tal * 10) + (array[i] - '0');
				i++;
			}
			else if ((2 * (array[i] - '0')) == 18) {
				sum += 9;
				tal = (tal * 10) + (array[i] - '0');
				i++;
			}
			else {
				sum += 2 * (array[i] - '0');
				tal = (tal * 10) + (array[i] - '0');
				i++;
			}
		}
		else {
			kontroll = (array[i] - '0');
			tal = (tal * 10) + (array[i] - '0');
			i++;
		}
	}
	if (((sum + kontroll) % 10) == 0) {
		printf("Ditt nummer %ld ar korrekt\n", tal);
	}
	else {
		printf("Ditt nummer %ld ar felaktigt\n", tal);
	}
	return 0;
}
