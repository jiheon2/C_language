#include <stdio.h>

int i, k;
void gugu(int k) {
	for(i=1; i<10; i++) {
		printf("%d X %d = %2d\n", k, i, k*i);
	}
}
void main() {
	printf("출력하고 싶은 단을 입력 : ");
	scanf("%d", &k);
	
	gugu(k);
}
