#include <stdio.h>

void main()
{
	int a, b, c, i;
	int hap = 0;

	printf("시작값, 끝값, 증가값 입력 : ");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	for(i=a; i<=b; i+=c) {
		hap += i;
	}
	printf("%d에서 %d까지 %d씩 증가한 값의 합 : %d \n", a, b, c, hap);
}
