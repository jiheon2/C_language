#include <stdio.h>

int i, k;
void gugu(int k) {
	for(i=1; i<10; i++) {
		printf("%d X %d = %2d\n", k, i, k*i);
	}
}
void main() {
	printf("����ϰ� ���� ���� �Է� : ");
	scanf("%d", &k);
	
	gugu(k);
}
