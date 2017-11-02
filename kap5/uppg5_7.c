#include <stdio.h>
#define MAX 50
int main() {
	char text[MAX]; 
	double avg = 0, tecken = 0, tecken_tot = 0, antal_rader = 0;
	printf("Skriv nagra rader!!: ");
	while (scanf("%s", text) != EOF) {
		for (int i = 0; text[i] != '\0'; i++) {
			tecken = i + 1;
		}
	tecken_tot += tecken;
	antal_rader++;
	}
	if (antal_rader != 0) {
		avg = tecken_tot / antal_rader;
		printf("%.1lf ord per rad!\n", avg);
	}
	else
		printf("Allt pa samma rad!\n");
	return 0;
}
