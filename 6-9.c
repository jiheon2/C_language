#include <stdio.h>

void main()
{
	int i,a;
	int hap=0;
	
	printf("�� �Է� : ");
	scanf("%d", &a);

	for(i=1; i<=a; i++) {
		hap += i;
	}
	printf("1���� %d������ �� : %d \n", a, hap);
}