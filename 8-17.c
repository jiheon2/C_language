#include <stdio.h>

void main() {
	int gugu[9][9];
	int i, k;
	

	for(i=1; i<10; i++) {
		for(k=2; k<10; k++) {
			gugu[i][k] = i * k;
			printf("%dX%d=%2d ", k, i, gugu[i][k]);
		}
		printf("\n");
	}
}
