#include <stdio.h>

void main()
{
	int i,k;

	printf("¸î ´Ü? ");
	scanf("%d", &k);

	for(i=1; i<=9; i++) {
		printf("%d X %d = %d \n", k, i, k*i);
	}
}
