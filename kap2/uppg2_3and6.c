#include <stdio.h>

int kvad(int num)
{
	return num * num;
}

int kub(int num)
{
	return num * num * num;
}

int main(void)
{
	int i, j = 1, k, kvadv, kubv;
  printf("ange maxvarde pa variabeln i: ");
	scanf("%d", &i);
	printf("\n i      i*i       i*i*i\n");
	printf("===    =====     =======\n");
	while(k < i)
	{
		kvadv = kvad(j);
		kubv = kub(j);
		printf("%2d%9d%12d\n", j, kvadv, kubv);
		j++;
		k = kub(j);
	}
	return 0;
}
