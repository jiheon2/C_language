#include <stdio.h>

void main()
{
	int i,a;
	int hap=0;
	
	printf("값 입력 : ");
	scanf("%d", &a);

	for(i=1; i<=a; i++) {
		hap += i;
	}
	printf("1에서 %d까지의 합 : %d \n", a, hap);
}
