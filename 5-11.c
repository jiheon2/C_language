#include <stdio.h>

void main() {
	char a = ' ';
	int b, c;
	printf("수식을 한줄로 띄어쓰기로 입력하세요 : ");
	scanf("%d", &b);
	scanf(" %c", &a);
	scanf("%d", &c);
	
	switch(a) {
		case'+':
			printf("%d + %d = %d \n", b, c, b+c);
			break;
		case'-':
			printf("%d - %d = %d \n", b, c, b-c);
			break;
		case'*':
			printf("%d * %d = %d \n", b, c, b*c);
			break;
		case'/':
			printf("%d / %d = %d \n", b, c, b/c);
			break;
		case'%':
			printf("%d %% %d = %d \n", b, c, b%c);
			break;
		default:
			printf("연산자를 잘못 입력했습니다.\n");
			break;
	}
}
