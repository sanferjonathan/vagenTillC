#include <stdio.h>

int main() {
	int langd, i, j;
	char s[20], rs[20];
	printf("Ange en textstrang: ");
	scanf("%s", s);
	for (langd = 0; s[langd] != '\0'; langd++)
		;
	printf("langd ar: %d\n", langd);
	printf("din strang ar: %s\n", s);
	for (i = 0, j = langd; i <= langd + 1; i++, j--) {
		rs[i] = s[j - 1];	
	}
	printf("%s\n", rs);

	return 0;
}
