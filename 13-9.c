#include <stdio.h>
#include <malloc.h>

void main() {
	
	int cnt;
	int i;

	struct student {
		char name[10];
		int age;
	};

	printf("�Է��� �л� �� : ");
	scanf("%d", &cnt);

	struct student s[cnt];
	struct student* p;

	p = (struct student*) malloc(sizeof(struct student) * cnt);

	p = s;
	
	for(i=0; i<cnt; i++) {
		printf("�̸� �Է� : ");
		scanf("%s", s[i].name);
		printf("���� �Է� : ");
		scanf("%d", &(s[i].age));

		printf("\n");
	}

	for(i=0; i<cnt; i++) {
		printf("�̸� : %s , ���� : %d\n", s[i].name, s[i].age);
	}
	
	free(p);
}
	
	
