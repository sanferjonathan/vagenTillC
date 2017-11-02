#include <stdio.h>
#define MAX 20
int main() {
	char s[MAX], imax, temp;
	printf("Ange din strang du vill sortera: ");
	scanf("%s", s);
	for (int i = 0; s[i] != '\0'; i++) {
			imax = i;
		for (int j = i + 1; s[j] != '\0'; j++) {
			if (s[j] > s[imax]) {
				temp = s[imax];
				s[imax] = s[j];
				s[j] = temp;
			}
		}
	}
	printf("%s\n", s);
	while ( getchar() != '\n' );
    	getchar();
	return 0;
}
