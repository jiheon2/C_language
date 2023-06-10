#include <stdio.h>

void main() {
	FILE *wfp;
	int i, k;

	wfp = fopen("c:\\c_study\\gugu.txt", "w");

	for(int a = 2; a<10; a++) {
		fprintf(wfp, " #Á¦%d´Ü# ", a);
	}
	 
	fprintf(wfp, "\n");

	for(i=1; i<10; i++) {
		for(k=2; k<10; k++) {
			fprintf(wfp, "%d X %d = %2d ", k, i, k*i);
		}
		fprintf(wfp, "\n");
	 }
	
	fclose(wfp);
}
