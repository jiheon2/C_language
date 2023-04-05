#include <stdio.h>

void main() {
	int i, k;

	for(i=2; i<=9; i++) {
		printf("#Á¦%d´Ü# \t",i);
	}
	
	printf("\n");

	for(k=1; k<=9; k++) {
		for(i=2; i<=9; i++) {
			printf("%d X %d = %d \t",i ,k,i*k);
		}

		printf("\n");
	}
}
