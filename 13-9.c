#include <stdio.h>
#include <malloc.h>

void main() {
	
	int cnt;
	int i;

	struct student {
		char name[10];
		int age;
	};

	printf("입력할 학생 수 : ");
	scanf("%d", &cnt);

	struct student s[cnt];
	struct student* p;

	p = (struct student*) malloc(sizeof(struct student) * cnt);

	p = s;
	
	for(i=0; i<cnt; i++) {
		printf("이름 입력 : ");
		scanf("%s", s[i].name);
		printf("나이 입력 : ");
		scanf("%d", &(s[i].age));

		printf("\n");
	}

	for(i=0; i<cnt; i++) {
		printf("이름 : %s , 나이 : %d\n", s[i].name, s[i].age);
	}
	
	free(p);
}
	
	
