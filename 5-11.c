#include <stdio.h>

void main() {
	char a = ' ';
	int b, c;
	printf("������ ���ٷ� ����� �Է��ϼ��� : ");
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
			printf("�����ڸ� �߸� �Է��߽��ϴ�.\n");
			break;
	}
}
