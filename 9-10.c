#include <stdio.h>

void main () {

int a, b;

printf("a�� �Է� : ");
scanf("%d", &a);

printf("b�� �Է� : ");
scanf("%d", &b);

int* tmp;

int* p1;
p1 = &a;

int* p2;
p2 = &b;

tmp = p1;
p1 = p2;
p2 = tmp;

printf("�ٲ� �� a�� %d, b�� %d", *p1, *p2);
}
